// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITESRESPONSE_P_H
#define QTAWS_LISTSUITESRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListSuitesResponse;

class ListSuitesResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListSuitesResponsePrivate(ListSuitesResponse * const q);

    void parseListSuitesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSuitesResponse)
    Q_DISABLE_COPY(ListSuitesResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
