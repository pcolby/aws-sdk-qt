// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETSRESPONSE_P_H
#define QTAWS_LISTFLEETSRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class ListFleetsResponse;

class ListFleetsResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit ListFleetsResponsePrivate(ListFleetsResponse * const q);

    void parseListFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFleetsResponse)
    Q_DISABLE_COPY(ListFleetsResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
