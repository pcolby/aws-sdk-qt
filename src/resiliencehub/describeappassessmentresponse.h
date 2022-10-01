// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPASSESSMENTRESPONSE_H
#define QTAWS_DESCRIBEAPPASSESSMENTRESPONSE_H

#include "resiliencehubresponse.h"
#include "describeappassessmentrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppAssessmentResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeAppAssessmentResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    DescribeAppAssessmentResponse(const DescribeAppAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppAssessmentResponse)
    Q_DISABLE_COPY(DescribeAppAssessmentResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
