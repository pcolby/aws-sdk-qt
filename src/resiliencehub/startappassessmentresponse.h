// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPASSESSMENTRESPONSE_H
#define QTAWS_STARTAPPASSESSMENTRESPONSE_H

#include "resiliencehubresponse.h"
#include "startappassessmentrequest.h"

namespace QtAws {
namespace ResilienceHub {

class StartAppAssessmentResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT StartAppAssessmentResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    StartAppAssessmentResponse(const StartAppAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAppAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAppAssessmentResponse)
    Q_DISABLE_COPY(StartAppAssessmentResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
