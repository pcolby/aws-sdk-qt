// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFIERSRESPONSE_P_H
#define QTAWS_LISTDOCUMENTCLASSIFIERSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassifiersResponse;

class ListDocumentClassifiersResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListDocumentClassifiersResponsePrivate(ListDocumentClassifiersResponse * const q);

    void parseListDocumentClassifiersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDocumentClassifiersResponse)
    Q_DISABLE_COPY(ListDocumentClassifiersResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
