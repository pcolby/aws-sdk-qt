// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARCHIVERULERESPONSE_H
#define QTAWS_CREATEARCHIVERULERESPONSE_H

#include "accessanalyzerresponse.h"
#include "createarchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateArchiveRuleResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT CreateArchiveRuleResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    CreateArchiveRuleResponse(const CreateArchiveRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateArchiveRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateArchiveRuleResponse)
    Q_DISABLE_COPY(CreateArchiveRuleResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
