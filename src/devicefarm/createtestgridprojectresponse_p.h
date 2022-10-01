// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETESTGRIDPROJECTRESPONSE_P_H
#define QTAWS_CREATETESTGRIDPROJECTRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class CreateTestGridProjectResponse;

class CreateTestGridProjectResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit CreateTestGridProjectResponsePrivate(CreateTestGridProjectResponse * const q);

    void parseCreateTestGridProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTestGridProjectResponse)
    Q_DISABLE_COPY(CreateTestGridProjectResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
