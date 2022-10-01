// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSREQUEST_H
#define QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateNumberOfDomainControllersRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UpdateNumberOfDomainControllersRequest : public DirectoryServiceRequest {

public:
    UpdateNumberOfDomainControllersRequest(const UpdateNumberOfDomainControllersRequest &other);
    UpdateNumberOfDomainControllersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNumberOfDomainControllersRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
