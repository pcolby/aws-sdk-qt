// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECANARIESLASTRUNRESPONSE_H
#define QTAWS_DESCRIBECANARIESLASTRUNRESPONSE_H

#include "syntheticsresponse.h"
#include "describecanarieslastrunrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeCanariesLastRunResponsePrivate;

class QTAWSSYNTHETICS_EXPORT DescribeCanariesLastRunResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    DescribeCanariesLastRunResponse(const DescribeCanariesLastRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCanariesLastRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCanariesLastRunResponse)
    Q_DISABLE_COPY(DescribeCanariesLastRunResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
