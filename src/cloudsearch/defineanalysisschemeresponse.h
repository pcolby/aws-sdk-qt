// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEANALYSISSCHEMERESPONSE_H
#define QTAWS_DEFINEANALYSISSCHEMERESPONSE_H

#include "cloudsearchresponse.h"
#include "defineanalysisschemerequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineAnalysisSchemeResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DefineAnalysisSchemeResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DefineAnalysisSchemeResponse(const DefineAnalysisSchemeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DefineAnalysisSchemeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DefineAnalysisSchemeResponse)
    Q_DISABLE_COPY(DefineAnalysisSchemeResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
