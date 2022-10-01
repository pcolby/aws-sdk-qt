// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTRESPONSE_P_H
#define QTAWS_DELETEPROJECTRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteProjectResponse;

class DeleteProjectResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit DeleteProjectResponsePrivate(DeleteProjectResponse * const q);

    void parseDeleteProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProjectResponse)
    Q_DISABLE_COPY(DeleteProjectResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
