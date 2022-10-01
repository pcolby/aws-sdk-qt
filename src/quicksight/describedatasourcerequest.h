// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCEREQUEST_H
#define QTAWS_DESCRIBEDATASOURCEREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSourceRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDataSourceRequest : public QuickSightRequest {

public:
    DescribeDataSourceRequest(const DescribeDataSourceRequest &other);
    DescribeDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSourceRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
