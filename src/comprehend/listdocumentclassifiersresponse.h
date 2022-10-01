// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFIERSRESPONSE_H
#define QTAWS_LISTDOCUMENTCLASSIFIERSRESPONSE_H

#include "comprehendresponse.h"
#include "listdocumentclassifiersrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassifiersResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListDocumentClassifiersResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListDocumentClassifiersResponse(const ListDocumentClassifiersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDocumentClassifiersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentClassifiersResponse)
    Q_DISABLE_COPY(ListDocumentClassifiersResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
