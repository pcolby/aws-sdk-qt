// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPARENTPATHSRESPONSE_P_H
#define QTAWS_LISTOBJECTPARENTPATHSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectParentPathsResponse;

class ListObjectParentPathsResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListObjectParentPathsResponsePrivate(ListObjectParentPathsResponse * const q);

    void parseListObjectParentPathsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectParentPathsResponse)
    Q_DISABLE_COPY(ListObjectParentPathsResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
