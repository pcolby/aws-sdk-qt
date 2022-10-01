// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECLIENTAUTHENTICATIONREQUEST_H
#define QTAWS_ENABLECLIENTAUTHENTICATIONREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableClientAuthenticationRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT EnableClientAuthenticationRequest : public DirectoryServiceRequest {

public:
    EnableClientAuthenticationRequest(const EnableClientAuthenticationRequest &other);
    EnableClientAuthenticationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableClientAuthenticationRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
