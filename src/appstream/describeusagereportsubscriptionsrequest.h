// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSAGEREPORTSUBSCRIPTIONSREQUEST_H
#define QTAWS_DESCRIBEUSAGEREPORTSUBSCRIPTIONSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeUsageReportSubscriptionsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeUsageReportSubscriptionsRequest : public AppStreamRequest {

public:
    DescribeUsageReportSubscriptionsRequest(const DescribeUsageReportSubscriptionsRequest &other);
    DescribeUsageReportSubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUsageReportSubscriptionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
