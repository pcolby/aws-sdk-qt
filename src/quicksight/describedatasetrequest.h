// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETREQUEST_H
#define QTAWS_DESCRIBEDATASETREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSetRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDataSetRequest : public QuickSightRequest {

public:
    DescribeDataSetRequest(const DescribeDataSetRequest &other);
    DescribeDataSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSetRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
