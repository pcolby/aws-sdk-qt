// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTTARGETRESPONSE_H
#define QTAWS_UPDATEASSESSMENTTARGETRESPONSE_H

#include "inspectorresponse.h"
#include "updateassessmenttargetrequest.h"

namespace QtAws {
namespace Inspector {

class UpdateAssessmentTargetResponsePrivate;

class QTAWSINSPECTOR_EXPORT UpdateAssessmentTargetResponse : public InspectorResponse {
    Q_OBJECT

public:
    UpdateAssessmentTargetResponse(const UpdateAssessmentTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssessmentTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentTargetResponse)
    Q_DISABLE_COPY(UpdateAssessmentTargetResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
