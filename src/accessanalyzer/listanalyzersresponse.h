// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYZERSRESPONSE_H
#define QTAWS_LISTANALYZERSRESPONSE_H

#include "accessanalyzerresponse.h"
#include "listanalyzersrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAnalyzersResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT ListAnalyzersResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    ListAnalyzersResponse(const ListAnalyzersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnalyzersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnalyzersResponse)
    Q_DISABLE_COPY(ListAnalyzersResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
