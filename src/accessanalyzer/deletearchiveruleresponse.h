// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVERULERESPONSE_H
#define QTAWS_DELETEARCHIVERULERESPONSE_H

#include "accessanalyzerresponse.h"
#include "deletearchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class DeleteArchiveRuleResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT DeleteArchiveRuleResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    DeleteArchiveRuleResponse(const DeleteArchiveRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteArchiveRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteArchiveRuleResponse)
    Q_DISABLE_COPY(DeleteArchiveRuleResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
