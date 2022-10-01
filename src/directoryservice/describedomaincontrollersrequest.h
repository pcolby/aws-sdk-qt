// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONTROLLERSREQUEST_H
#define QTAWS_DESCRIBEDOMAINCONTROLLERSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDomainControllersRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeDomainControllersRequest : public DirectoryServiceRequest {

public:
    DescribeDomainControllersRequest(const DescribeDomainControllersRequest &other);
    DescribeDomainControllersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainControllersRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
