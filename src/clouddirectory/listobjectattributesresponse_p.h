// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTATTRIBUTESRESPONSE_P_H
#define QTAWS_LISTOBJECTATTRIBUTESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectAttributesResponse;

class ListObjectAttributesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListObjectAttributesResponsePrivate(ListObjectAttributesResponse * const q);

    void parseListObjectAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectAttributesResponse)
    Q_DISABLE_COPY(ListObjectAttributesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
