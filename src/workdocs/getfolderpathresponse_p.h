// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERPATHRESPONSE_P_H
#define QTAWS_GETFOLDERPATHRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class GetFolderPathResponse;

class GetFolderPathResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit GetFolderPathResponsePrivate(GetFolderPathResponse * const q);

    void parseGetFolderPathResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFolderPathResponse)
    Q_DISABLE_COPY(GetFolderPathResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
