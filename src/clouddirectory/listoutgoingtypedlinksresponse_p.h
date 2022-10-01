// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTGOINGTYPEDLINKSRESPONSE_P_H
#define QTAWS_LISTOUTGOINGTYPEDLINKSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListOutgoingTypedLinksResponse;

class ListOutgoingTypedLinksResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListOutgoingTypedLinksResponsePrivate(ListOutgoingTypedLinksResponse * const q);

    void parseListOutgoingTypedLinksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOutgoingTypedLinksResponse)
    Q_DISABLE_COPY(ListOutgoingTypedLinksResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
