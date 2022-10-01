// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTTARGETRESPONSE_H
#define QTAWS_CREATEASSESSMENTTARGETRESPONSE_H

#include "inspectorresponse.h"
#include "createassessmenttargetrequest.h"

namespace QtAws {
namespace Inspector {

class CreateAssessmentTargetResponsePrivate;

class QTAWSINSPECTOR_EXPORT CreateAssessmentTargetResponse : public InspectorResponse {
    Q_OBJECT

public:
    CreateAssessmentTargetResponse(const CreateAssessmentTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssessmentTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentTargetResponse)
    Q_DISABLE_COPY(CreateAssessmentTargetResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
