// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINCOMINGTYPEDLINKSRESPONSE_P_H
#define QTAWS_LISTINCOMINGTYPEDLINKSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListIncomingTypedLinksResponse;

class ListIncomingTypedLinksResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListIncomingTypedLinksResponsePrivate(ListIncomingTypedLinksResponse * const q);

    void parseListIncomingTypedLinksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIncomingTypedLinksResponse)
    Q_DISABLE_COPY(ListIncomingTypedLinksResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
