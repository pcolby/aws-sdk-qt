// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTEDGRANTSREQUEST_H
#define QTAWS_LISTDISTRIBUTEDGRANTSREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListDistributedGrantsRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListDistributedGrantsRequest : public LicenseManagerRequest {

public:
    ListDistributedGrantsRequest(const ListDistributedGrantsRequest &other);
    ListDistributedGrantsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributedGrantsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
