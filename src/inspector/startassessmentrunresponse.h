// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTRUNRESPONSE_H
#define QTAWS_STARTASSESSMENTRUNRESPONSE_H

#include "inspectorresponse.h"
#include "startassessmentrunrequest.h"

namespace QtAws {
namespace Inspector {

class StartAssessmentRunResponsePrivate;

class QTAWSINSPECTOR_EXPORT StartAssessmentRunResponse : public InspectorResponse {
    Q_OBJECT

public:
    StartAssessmentRunResponse(const StartAssessmentRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAssessmentRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAssessmentRunResponse)
    Q_DISABLE_COPY(StartAssessmentRunResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
