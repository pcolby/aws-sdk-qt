// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETESTGRIDPROJECTRESPONSE_P_H
#define QTAWS_DELETETESTGRIDPROJECTRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteTestGridProjectResponse;

class DeleteTestGridProjectResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit DeleteTestGridProjectResponsePrivate(DeleteTestGridProjectResponse * const q);

    void parseDeleteTestGridProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTestGridProjectResponse)
    Q_DISABLE_COPY(DeleteTestGridProjectResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
