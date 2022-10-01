// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMILESTONESRESPONSE_P_H
#define QTAWS_LISTMILESTONESRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListMilestonesResponse;

class ListMilestonesResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListMilestonesResponsePrivate(ListMilestonesResponse * const q);

    void parseListMilestonesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMilestonesResponse)
    Q_DISABLE_COPY(ListMilestonesResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
