// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSSHARESRESPONSE_P_H
#define QTAWS_LISTLENSSHARESRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListLensSharesResponse;

class ListLensSharesResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListLensSharesResponsePrivate(ListLensSharesResponse * const q);

    void parseListLensSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLensSharesResponse)
    Q_DISABLE_COPY(ListLensSharesResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
