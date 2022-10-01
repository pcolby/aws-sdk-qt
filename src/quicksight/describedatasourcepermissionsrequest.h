// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCEPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEDATASOURCEPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSourcePermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDataSourcePermissionsRequest : public QuickSightRequest {

public:
    DescribeDataSourcePermissionsRequest(const DescribeDataSourcePermissionsRequest &other);
    DescribeDataSourcePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSourcePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
