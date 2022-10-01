// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTCHILDRENRESPONSE_P_H
#define QTAWS_LISTOBJECTCHILDRENRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectChildrenResponse;

class ListObjectChildrenResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListObjectChildrenResponsePrivate(ListObjectChildrenResponse * const q);

    void parseListObjectChildrenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectChildrenResponse)
    Q_DISABLE_COPY(ListObjectChildrenResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
