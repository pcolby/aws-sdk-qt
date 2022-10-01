// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTRUNRESPONSE_H
#define QTAWS_DELETEASSESSMENTRUNRESPONSE_H

#include "inspectorresponse.h"
#include "deleteassessmentrunrequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentRunResponsePrivate;

class QTAWSINSPECTOR_EXPORT DeleteAssessmentRunResponse : public InspectorResponse {
    Q_OBJECT

public:
    DeleteAssessmentRunResponse(const DeleteAssessmentRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssessmentRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentRunResponse)
    Q_DISABLE_COPY(DeleteAssessmentRunResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
