// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTGRIDPROJECTRESPONSE_P_H
#define QTAWS_GETTESTGRIDPROJECTRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestGridProjectResponse;

class GetTestGridProjectResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetTestGridProjectResponsePrivate(GetTestGridProjectResponse * const q);

    void parseGetTestGridProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTestGridProjectResponse)
    Q_DISABLE_COPY(GetTestGridProjectResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
