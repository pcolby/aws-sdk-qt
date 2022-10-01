// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTSRESPONSE_P_H
#define QTAWS_LISTTESTSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestsResponse;

class ListTestsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListTestsResponsePrivate(ListTestsResponse * const q);

    void parseListTestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTestsResponse)
    Q_DISABLE_COPY(ListTestsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
