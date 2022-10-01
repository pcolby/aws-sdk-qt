// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTRUNSRESPONSE_H
#define QTAWS_DESCRIBEASSESSMENTRUNSRESPONSE_H

#include "inspectorresponse.h"
#include "describeassessmentrunsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentRunsResponsePrivate;

class QTAWSINSPECTOR_EXPORT DescribeAssessmentRunsResponse : public InspectorResponse {
    Q_OBJECT

public:
    DescribeAssessmentRunsResponse(const DescribeAssessmentRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssessmentRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssessmentRunsResponse)
    Q_DISABLE_COPY(DescribeAssessmentRunsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
