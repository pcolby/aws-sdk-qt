// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOTSRESPONSE_P_H
#define QTAWS_LISTROOTSRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListRootsResponse;

class ListRootsResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListRootsResponsePrivate(ListRootsResponse * const q);

    void parseListRootsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRootsResponse)
    Q_DISABLE_COPY(ListRootsResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
