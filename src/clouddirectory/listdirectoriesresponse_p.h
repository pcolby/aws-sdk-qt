// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDIRECTORIESRESPONSE_P_H
#define QTAWS_LISTDIRECTORIESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListDirectoriesResponse;

class ListDirectoriesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListDirectoriesResponsePrivate(ListDirectoriesResponse * const q);

    void parseListDirectoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDirectoriesResponse)
    Q_DISABLE_COPY(ListDirectoriesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
