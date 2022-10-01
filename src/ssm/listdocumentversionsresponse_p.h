// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTVERSIONSRESPONSE_P_H
#define QTAWS_LISTDOCUMENTVERSIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListDocumentVersionsResponse;

class ListDocumentVersionsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListDocumentVersionsResponsePrivate(ListDocumentVersionsResponse * const q);

    void parseListDocumentVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDocumentVersionsResponse)
    Q_DISABLE_COPY(ListDocumentVersionsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
