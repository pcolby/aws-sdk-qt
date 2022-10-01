// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTTARGETRESPONSE_H
#define QTAWS_DELETEASSESSMENTTARGETRESPONSE_H

#include "inspectorresponse.h"
#include "deleteassessmenttargetrequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentTargetResponsePrivate;

class QTAWSINSPECTOR_EXPORT DeleteAssessmentTargetResponse : public InspectorResponse {
    Q_OBJECT

public:
    DeleteAssessmentTargetResponse(const DeleteAssessmentTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssessmentTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentTargetResponse)
    Q_DISABLE_COPY(DeleteAssessmentTargetResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
