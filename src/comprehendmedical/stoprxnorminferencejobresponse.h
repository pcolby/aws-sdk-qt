// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRXNORMINFERENCEJOBRESPONSE_H
#define QTAWS_STOPRXNORMINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "stoprxnorminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopRxNormInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopRxNormInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StopRxNormInferenceJobResponse(const StopRxNormInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopRxNormInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRxNormInferenceJobResponse)
    Q_DISABLE_COPY(StopRxNormInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
