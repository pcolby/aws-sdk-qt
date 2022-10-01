// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETESTGRIDPROJECTRESPONSE_P_H
#define QTAWS_UPDATETESTGRIDPROJECTRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateTestGridProjectResponse;

class UpdateTestGridProjectResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit UpdateTestGridProjectResponsePrivate(UpdateTestGridProjectResponse * const q);

    void parseUpdateTestGridProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTestGridProjectResponse)
    Q_DISABLE_COPY(UpdateTestGridProjectResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
