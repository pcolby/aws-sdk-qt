// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRODUCTSUBSCRIPTIONSREQUEST_H
#define QTAWS_LISTPRODUCTSUBSCRIPTIONSREQUEST_H

#include "licensemanagerusersubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListProductSubscriptionsRequestPrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT ListProductSubscriptionsRequest : public LicenseManagerUserSubscriptionsRequest {

public:
    ListProductSubscriptionsRequest(const ListProductSubscriptionsRequest &other);
    ListProductSubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProductSubscriptionsRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
