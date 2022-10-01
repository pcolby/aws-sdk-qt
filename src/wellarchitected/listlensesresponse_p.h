// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSESRESPONSE_P_H
#define QTAWS_LISTLENSESRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListLensesResponse;

class ListLensesResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListLensesResponsePrivate(ListLensesResponse * const q);

    void parseListLensesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLensesResponse)
    Q_DISABLE_COPY(ListLensesResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
