// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTVERSIONSRESPONSE_H
#define QTAWS_LISTDOCUMENTVERSIONSRESPONSE_H

#include "ssmresponse.h"
#include "listdocumentversionsrequest.h"

namespace QtAws {
namespace Ssm {

class ListDocumentVersionsResponsePrivate;

class QTAWSSSM_EXPORT ListDocumentVersionsResponse : public SsmResponse {
    Q_OBJECT

public:
    ListDocumentVersionsResponse(const ListDocumentVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDocumentVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentVersionsResponse)
    Q_DISABLE_COPY(ListDocumentVersionsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
