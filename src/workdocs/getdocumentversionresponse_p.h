// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTVERSIONRESPONSE_P_H
#define QTAWS_GETDOCUMENTVERSIONRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentVersionResponse;

class GetDocumentVersionResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit GetDocumentVersionResponsePrivate(GetDocumentVersionResponse * const q);

    void parseGetDocumentVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentVersionResponse)
    Q_DISABLE_COPY(GetDocumentVersionResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
