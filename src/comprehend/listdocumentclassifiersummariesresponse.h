// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFIERSUMMARIESRESPONSE_H
#define QTAWS_LISTDOCUMENTCLASSIFIERSUMMARIESRESPONSE_H

#include "comprehendresponse.h"
#include "listdocumentclassifiersummariesrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassifierSummariesResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListDocumentClassifierSummariesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListDocumentClassifierSummariesResponse(const ListDocumentClassifierSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDocumentClassifierSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentClassifierSummariesResponse)
    Q_DISABLE_COPY(ListDocumentClassifierSummariesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
