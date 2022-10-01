// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONSRESPONSE_P_H
#define QTAWS_LISTTESTGRIDSESSIONSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionsResponse;

class ListTestGridSessionsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListTestGridSessionsResponsePrivate(ListTestGridSessionsResponse * const q);

    void parseListTestGridSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTestGridSessionsResponse)
    Q_DISABLE_COPY(ListTestGridSessionsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
