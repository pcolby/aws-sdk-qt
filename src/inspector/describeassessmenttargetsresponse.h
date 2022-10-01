// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTTARGETSRESPONSE_H
#define QTAWS_DESCRIBEASSESSMENTTARGETSRESPONSE_H

#include "inspectorresponse.h"
#include "describeassessmenttargetsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentTargetsResponsePrivate;

class QTAWSINSPECTOR_EXPORT DescribeAssessmentTargetsResponse : public InspectorResponse {
    Q_OBJECT

public:
    DescribeAssessmentTargetsResponse(const DescribeAssessmentTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssessmentTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssessmentTargetsResponse)
    Q_DISABLE_COPY(DescribeAssessmentTargetsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
