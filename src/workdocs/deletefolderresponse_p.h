// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERRESPONSE_P_H
#define QTAWS_DELETEFOLDERRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DeleteFolderResponse;

class DeleteFolderResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DeleteFolderResponsePrivate(DeleteFolderResponse * const q);

    void parseDeleteFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFolderResponse)
    Q_DISABLE_COPY(DeleteFolderResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
