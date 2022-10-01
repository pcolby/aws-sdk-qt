// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTRESPONSE_P_H
#define QTAWS_GETDOCUMENTRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentResponse;

class GetDocumentResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit GetDocumentResponsePrivate(GetDocumentResponse * const q);

    void parseGetDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentResponse)
    Q_DISABLE_COPY(GetDocumentResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
