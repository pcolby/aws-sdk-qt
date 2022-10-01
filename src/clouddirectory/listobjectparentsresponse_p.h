// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPARENTSRESPONSE_P_H
#define QTAWS_LISTOBJECTPARENTSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectParentsResponse;

class ListObjectParentsResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListObjectParentsResponsePrivate(ListObjectParentsResponse * const q);

    void parseListObjectParentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectParentsResponse)
    Q_DISABLE_COPY(ListObjectParentsResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
