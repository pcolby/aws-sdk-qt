// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSRESPONSE_P_H
#define QTAWS_LISTFINDINGSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class ListFindingsResponse;

class ListFindingsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit ListFindingsResponsePrivate(ListFindingsResponse * const q);

    void parseListFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFindingsResponse)
    Q_DISABLE_COPY(ListFindingsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
