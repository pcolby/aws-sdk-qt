// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERRESPONSE_P_H
#define QTAWS_UPDATEFOLDERRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class UpdateFolderResponse;

class UpdateFolderResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit UpdateFolderResponsePrivate(UpdateFolderResponse * const q);

    void parseUpdateFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFolderResponse)
    Q_DISABLE_COPY(UpdateFolderResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
