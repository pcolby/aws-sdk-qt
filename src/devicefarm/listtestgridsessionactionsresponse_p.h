// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONACTIONSRESPONSE_P_H
#define QTAWS_LISTTESTGRIDSESSIONACTIONSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionActionsResponse;

class ListTestGridSessionActionsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListTestGridSessionActionsResponsePrivate(ListTestGridSessionActionsResponse * const q);

    void parseListTestGridSessionActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTestGridSessionActionsResponse)
    Q_DISABLE_COPY(ListTestGridSessionActionsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
