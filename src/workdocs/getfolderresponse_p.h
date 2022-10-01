// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERRESPONSE_P_H
#define QTAWS_GETFOLDERRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class GetFolderResponse;

class GetFolderResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit GetFolderResponsePrivate(GetFolderResponse * const q);

    void parseGetFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFolderResponse)
    Q_DISABLE_COPY(GetFolderResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
