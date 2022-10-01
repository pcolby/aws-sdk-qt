// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERCONTENTSRESPONSE_P_H
#define QTAWS_DELETEFOLDERCONTENTSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DeleteFolderContentsResponse;

class DeleteFolderContentsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DeleteFolderContentsResponsePrivate(DeleteFolderContentsResponse * const q);

    void parseDeleteFolderContentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFolderContentsResponse)
    Q_DISABLE_COPY(DeleteFolderContentsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
