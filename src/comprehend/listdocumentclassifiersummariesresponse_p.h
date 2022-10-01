// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFIERSUMMARIESRESPONSE_P_H
#define QTAWS_LISTDOCUMENTCLASSIFIERSUMMARIESRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassifierSummariesResponse;

class ListDocumentClassifierSummariesResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListDocumentClassifierSummariesResponsePrivate(ListDocumentClassifierSummariesResponse * const q);

    void parseListDocumentClassifierSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDocumentClassifierSummariesResponse)
    Q_DISABLE_COPY(ListDocumentClassifierSummariesResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
