// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGPATTERNRESPONSE_H
#define QTAWS_DESCRIBELOGPATTERNRESPONSE_H

#include "applicationinsightsresponse.h"
#include "describelogpatternrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeLogPatternResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeLogPatternResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    DescribeLogPatternResponse(const DescribeLogPatternRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLogPatternRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLogPatternResponse)
    Q_DISABLE_COPY(DescribeLogPatternResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
