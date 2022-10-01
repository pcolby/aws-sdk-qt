// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYZEDRESOURCESRESPONSE_H
#define QTAWS_LISTANALYZEDRESOURCESRESPONSE_H

#include "accessanalyzerresponse.h"
#include "listanalyzedresourcesrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAnalyzedResourcesResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT ListAnalyzedResourcesResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    ListAnalyzedResourcesResponse(const ListAnalyzedResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnalyzedResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnalyzedResourcesResponse)
    Q_DISABLE_COPY(ListAnalyzedResourcesResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
