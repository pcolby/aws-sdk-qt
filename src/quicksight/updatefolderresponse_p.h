// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERRESPONSE_P_H
#define QTAWS_UPDATEFOLDERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateFolderResponse;

class UpdateFolderResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateFolderResponsePrivate(UpdateFolderResponse * const q);

    void parseUpdateFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFolderResponse)
    Q_DISABLE_COPY(UpdateFolderResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
