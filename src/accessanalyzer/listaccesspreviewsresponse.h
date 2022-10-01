// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPREVIEWSRESPONSE_H
#define QTAWS_LISTACCESSPREVIEWSRESPONSE_H

#include "accessanalyzerresponse.h"
#include "listaccesspreviewsrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAccessPreviewsResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT ListAccessPreviewsResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    ListAccessPreviewsResponse(const ListAccessPreviewsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccessPreviewsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessPreviewsResponse)
    Q_DISABLE_COPY(ListAccessPreviewsResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
