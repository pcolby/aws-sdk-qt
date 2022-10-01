// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSNOMEDCTINFERENCEJOBRESPONSE_H
#define QTAWS_STARTSNOMEDCTINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "startsnomedctinferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartSNOMEDCTInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartSNOMEDCTInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StartSNOMEDCTInferenceJobResponse(const StartSNOMEDCTInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSNOMEDCTInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSNOMEDCTInferenceJobResponse)
    Q_DISABLE_COPY(StartSNOMEDCTInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
