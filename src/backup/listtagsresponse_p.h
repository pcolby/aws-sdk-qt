// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSRESPONSE_P_H
#define QTAWS_LISTTAGSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListTagsResponse;

class ListTagsResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListTagsResponsePrivate(ListTagsResponse * const q);

    void parseListTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsResponse)
    Q_DISABLE_COPY(ListTagsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
