// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDASHBOARDPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEDASHBOARDPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDashboardPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDashboardPermissionsRequest : public QuickSightRequest {

public:
    DescribeDashboardPermissionsRequest(const DescribeDashboardPermissionsRequest &other);
    DescribeDashboardPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDashboardPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
