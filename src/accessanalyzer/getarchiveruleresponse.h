// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARCHIVERULERESPONSE_H
#define QTAWS_GETARCHIVERULERESPONSE_H

#include "accessanalyzerresponse.h"
#include "getarchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetArchiveRuleResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT GetArchiveRuleResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    GetArchiveRuleResponse(const GetArchiveRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetArchiveRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetArchiveRuleResponse)
    Q_DISABLE_COPY(GetArchiveRuleResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
