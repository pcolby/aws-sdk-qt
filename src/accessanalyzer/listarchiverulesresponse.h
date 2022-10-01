// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARCHIVERULESRESPONSE_H
#define QTAWS_LISTARCHIVERULESRESPONSE_H

#include "accessanalyzerresponse.h"
#include "listarchiverulesrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListArchiveRulesResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT ListArchiveRulesResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    ListArchiveRulesResponse(const ListArchiveRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListArchiveRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListArchiveRulesResponse)
    Q_DISABLE_COPY(ListArchiveRulesResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
