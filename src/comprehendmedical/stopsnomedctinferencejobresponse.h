// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSNOMEDCTINFERENCEJOBRESPONSE_H
#define QTAWS_STOPSNOMEDCTINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "stopsnomedctinferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopSNOMEDCTInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopSNOMEDCTInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StopSNOMEDCTInferenceJobResponse(const StopSNOMEDCTInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopSNOMEDCTInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSNOMEDCTInferenceJobResponse)
    Q_DISABLE_COPY(StopSNOMEDCTInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
