// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRXNORMINFERENCEJOBRESPONSE_H
#define QTAWS_STARTRXNORMINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "startrxnorminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartRxNormInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartRxNormInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StartRxNormInferenceJobResponse(const StartRxNormInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartRxNormInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRxNormInferenceJobResponse)
    Q_DISABLE_COPY(StartRxNormInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
