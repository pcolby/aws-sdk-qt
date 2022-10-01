// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLELDAPSREQUEST_H
#define QTAWS_DISABLELDAPSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableLDAPSRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DisableLDAPSRequest : public DirectoryServiceRequest {

public:
    DisableLDAPSRequest(const DisableLDAPSRequest &other);
    DisableLDAPSRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableLDAPSRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
