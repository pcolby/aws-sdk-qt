// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSIGHTRESPONSE_H
#define QTAWS_DESCRIBEINSIGHTRESPONSE_H

#include "devopsgururesponse.h"
#include "describeinsightrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeInsightResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeInsightResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeInsightResponse(const DescribeInsightRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInsightRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInsightResponse)
    Q_DISABLE_COPY(DescribeInsightResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
