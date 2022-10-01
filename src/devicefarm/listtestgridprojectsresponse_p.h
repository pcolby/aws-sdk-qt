// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDPROJECTSRESPONSE_P_H
#define QTAWS_LISTTESTGRIDPROJECTSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridProjectsResponse;

class ListTestGridProjectsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListTestGridProjectsResponsePrivate(ListTestGridProjectsResponse * const q);

    void parseListTestGridProjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTestGridProjectsResponse)
    Q_DISABLE_COPY(ListTestGridProjectsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
