// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELPOLICYGENERATIONRESPONSE_H
#define QTAWS_CANCELPOLICYGENERATIONRESPONSE_H

#include "accessanalyzerresponse.h"
#include "cancelpolicygenerationrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CancelPolicyGenerationResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT CancelPolicyGenerationResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    CancelPolicyGenerationResponse(const CancelPolicyGenerationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelPolicyGenerationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelPolicyGenerationResponse)
    Q_DISABLE_COPY(CancelPolicyGenerationResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
