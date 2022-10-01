// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTVERSIONRESPONSE_P_H
#define QTAWS_UPDATEDOCUMENTVERSIONRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class UpdateDocumentVersionResponse;

class UpdateDocumentVersionResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit UpdateDocumentVersionResponsePrivate(UpdateDocumentVersionResponse * const q);

    void parseUpdateDocumentVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentVersionResponse)
    Q_DISABLE_COPY(UpdateDocumentVersionResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
