// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTMETADATAHISTORYRESPONSE_P_H
#define QTAWS_LISTDOCUMENTMETADATAHISTORYRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListDocumentMetadataHistoryResponse;

class ListDocumentMetadataHistoryResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListDocumentMetadataHistoryResponsePrivate(ListDocumentMetadataHistoryResponse * const q);

    void parseListDocumentMetadataHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDocumentMetadataHistoryResponse)
    Q_DISABLE_COPY(ListDocumentMetadataHistoryResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
