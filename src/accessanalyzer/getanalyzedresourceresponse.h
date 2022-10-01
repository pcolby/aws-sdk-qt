// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANALYZEDRESOURCERESPONSE_H
#define QTAWS_GETANALYZEDRESOURCERESPONSE_H

#include "accessanalyzerresponse.h"
#include "getanalyzedresourcerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAnalyzedResourceResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT GetAnalyzedResourceResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    GetAnalyzedResourceResponse(const GetAnalyzedResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAnalyzedResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnalyzedResourceResponse)
    Q_DISABLE_COPY(GetAnalyzedResourceResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
