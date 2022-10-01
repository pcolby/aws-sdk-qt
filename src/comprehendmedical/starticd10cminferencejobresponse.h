// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTICD10CMINFERENCEJOBRESPONSE_H
#define QTAWS_STARTICD10CMINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "starticd10cminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartICD10CMInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartICD10CMInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StartICD10CMInferenceJobResponse(const StartICD10CMInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartICD10CMInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartICD10CMInferenceJobResponse)
    Q_DISABLE_COPY(StartICD10CMInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
