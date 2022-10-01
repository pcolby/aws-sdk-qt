// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRUNSRESPONSE_P_H
#define QTAWS_LISTRUNSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListRunsResponse;

class ListRunsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListRunsResponsePrivate(ListRunsResponse * const q);

    void parseListRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRunsResponse)
    Q_DISABLE_COPY(ListRunsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
