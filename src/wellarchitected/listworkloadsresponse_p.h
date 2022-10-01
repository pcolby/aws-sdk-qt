// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKLOADSRESPONSE_P_H
#define QTAWS_LISTWORKLOADSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListWorkloadsResponse;

class ListWorkloadsResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListWorkloadsResponsePrivate(ListWorkloadsResponse * const q);

    void parseListWorkloadsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkloadsResponse)
    Q_DISABLE_COPY(ListWorkloadsResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
