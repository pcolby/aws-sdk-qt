// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVERULERESPONSE_H
#define QTAWS_UPDATEARCHIVERULERESPONSE_H

#include "accessanalyzerresponse.h"
#include "updatearchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class UpdateArchiveRuleResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT UpdateArchiveRuleResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    UpdateArchiveRuleResponse(const UpdateArchiveRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateArchiveRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateArchiveRuleResponse)
    Q_DISABLE_COPY(UpdateArchiveRuleResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
