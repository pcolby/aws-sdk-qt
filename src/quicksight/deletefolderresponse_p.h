// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERRESPONSE_P_H
#define QTAWS_DELETEFOLDERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteFolderResponse;

class DeleteFolderResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteFolderResponsePrivate(DeleteFolderResponse * const q);

    void parseDeleteFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFolderResponse)
    Q_DISABLE_COPY(DeleteFolderResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
