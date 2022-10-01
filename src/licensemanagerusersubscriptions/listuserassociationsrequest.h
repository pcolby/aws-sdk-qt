// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERASSOCIATIONSREQUEST_H
#define QTAWS_LISTUSERASSOCIATIONSREQUEST_H

#include "licensemanagerusersubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListUserAssociationsRequestPrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT ListUserAssociationsRequest : public LicenseManagerUserSubscriptionsRequest {

public:
    ListUserAssociationsRequest(const ListUserAssociationsRequest &other);
    ListUserAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserAssociationsRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
