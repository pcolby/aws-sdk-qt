// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTTEMPLATESRESPONSE_H
#define QTAWS_DESCRIBEASSESSMENTTEMPLATESRESPONSE_H

#include "inspectorresponse.h"
#include "describeassessmenttemplatesrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentTemplatesResponsePrivate;

class QTAWSINSPECTOR_EXPORT DescribeAssessmentTemplatesResponse : public InspectorResponse {
    Q_OBJECT

public:
    DescribeAssessmentTemplatesResponse(const DescribeAssessmentTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssessmentTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssessmentTemplatesResponse)
    Q_DISABLE_COPY(DescribeAssessmentTemplatesResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
