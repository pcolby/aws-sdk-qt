// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKLOADSHARESRESPONSE_P_H
#define QTAWS_LISTWORKLOADSHARESRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListWorkloadSharesResponse;

class ListWorkloadSharesResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListWorkloadSharesResponsePrivate(ListWorkloadSharesResponse * const q);

    void parseListWorkloadSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkloadSharesResponse)
    Q_DISABLE_COPY(ListWorkloadSharesResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
