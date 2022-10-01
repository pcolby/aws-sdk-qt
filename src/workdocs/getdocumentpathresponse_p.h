// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTPATHRESPONSE_P_H
#define QTAWS_GETDOCUMENTPATHRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentPathResponse;

class GetDocumentPathResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit GetDocumentPathResponsePrivate(GetDocumentPathResponse * const q);

    void parseGetDocumentPathResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentPathResponse)
    Q_DISABLE_COPY(GetDocumentPathResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
