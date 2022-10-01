// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYARCHIVERULERESPONSE_H
#define QTAWS_APPLYARCHIVERULERESPONSE_H

#include "accessanalyzerresponse.h"
#include "applyarchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ApplyArchiveRuleResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT ApplyArchiveRuleResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    ApplyArchiveRuleResponse(const ApplyArchiveRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ApplyArchiveRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplyArchiveRuleResponse)
    Q_DISABLE_COPY(ApplyArchiveRuleResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
