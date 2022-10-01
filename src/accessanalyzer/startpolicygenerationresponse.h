// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPOLICYGENERATIONRESPONSE_H
#define QTAWS_STARTPOLICYGENERATIONRESPONSE_H

#include "accessanalyzerresponse.h"
#include "startpolicygenerationrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class StartPolicyGenerationResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT StartPolicyGenerationResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    StartPolicyGenerationResponse(const StartPolicyGenerationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartPolicyGenerationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPolicyGenerationResponse)
    Q_DISABLE_COPY(StartPolicyGenerationResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
