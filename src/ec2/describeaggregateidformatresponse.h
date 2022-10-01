// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATEIDFORMATRESPONSE_H
#define QTAWS_DESCRIBEAGGREGATEIDFORMATRESPONSE_H

#include "ec2response.h"
#include "describeaggregateidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeAggregateIdFormatResponsePrivate;

class QTAWSEC2_EXPORT DescribeAggregateIdFormatResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeAggregateIdFormatResponse(const DescribeAggregateIdFormatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAggregateIdFormatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAggregateIdFormatResponse)
    Q_DISABLE_COPY(DescribeAggregateIdFormatResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
