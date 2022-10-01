// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECLIENTAUTHENTICATIONREQUEST_H
#define QTAWS_DISABLECLIENTAUTHENTICATIONREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableClientAuthenticationRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DisableClientAuthenticationRequest : public DirectoryServiceRequest {

public:
    DisableClientAuthenticationRequest(const DisableClientAuthenticationRequest &other);
    DisableClientAuthenticationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableClientAuthenticationRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
