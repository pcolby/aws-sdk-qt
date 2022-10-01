// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYRESPONSE_H
#define QTAWS_DESCRIBEANOMALYRESPONSE_H

#include "devopsgururesponse.h"
#include "describeanomalyrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAnomalyResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeAnomalyResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeAnomalyResponse(const DescribeAnomalyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAnomalyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnomalyResponse)
    Q_DISABLE_COPY(DescribeAnomalyResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
