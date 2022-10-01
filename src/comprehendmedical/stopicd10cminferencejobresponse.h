// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPICD10CMINFERENCEJOBRESPONSE_H
#define QTAWS_STOPICD10CMINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "stopicd10cminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopICD10CMInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopICD10CMInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StopICD10CMInferenceJobResponse(const StopICD10CMInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopICD10CMInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopICD10CMInferenceJobResponse)
    Q_DISABLE_COPY(StopICD10CMInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
