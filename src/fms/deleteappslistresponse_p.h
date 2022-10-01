// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPSLISTRESPONSE_P_H
#define QTAWS_DELETEAPPSLISTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class DeleteAppsListResponse;

class DeleteAppsListResponsePrivate : public FmsResponsePrivate {

public:

    explicit DeleteAppsListResponsePrivate(DeleteAppsListResponse * const q);

    void parseDeleteAppsListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppsListResponse)
    Q_DISABLE_COPY(DeleteAppsListResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
