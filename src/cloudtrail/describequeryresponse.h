// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYRESPONSE_H
#define QTAWS_DESCRIBEQUERYRESPONSE_H

#include "cloudtrailresponse.h"
#include "describequeryrequest.h"

namespace QtAws {
namespace CloudTrail {

class DescribeQueryResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT DescribeQueryResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    DescribeQueryResponse(const DescribeQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQueryResponse)
    Q_DISABLE_COPY(DescribeQueryResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
