// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPASSESSMENTRUNRESPONSE_H
#define QTAWS_STOPASSESSMENTRUNRESPONSE_H

#include "inspectorresponse.h"
#include "stopassessmentrunrequest.h"

namespace QtAws {
namespace Inspector {

class StopAssessmentRunResponsePrivate;

class QTAWSINSPECTOR_EXPORT StopAssessmentRunResponse : public InspectorResponse {
    Q_OBJECT

public:
    StopAssessmentRunResponse(const StopAssessmentRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopAssessmentRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAssessmentRunResponse)
    Q_DISABLE_COPY(StopAssessmentRunResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
