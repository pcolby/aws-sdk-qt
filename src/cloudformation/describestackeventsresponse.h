// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKEVENTSRESPONSE_H
#define QTAWS_DESCRIBESTACKEVENTSRESPONSE_H

#include "cloudformationresponse.h"
#include "describestackeventsrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackEventsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackEventsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackEventsResponse(const DescribeStackEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackEventsResponse)
    Q_DISABLE_COPY(DescribeStackEventsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
