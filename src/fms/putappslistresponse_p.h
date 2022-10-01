// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPSLISTRESPONSE_P_H
#define QTAWS_PUTAPPSLISTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class PutAppsListResponse;

class PutAppsListResponsePrivate : public FmsResponsePrivate {

public:

    explicit PutAppsListResponsePrivate(PutAppsListResponse * const q);

    void parsePutAppsListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAppsListResponse)
    Q_DISABLE_COPY(PutAppsListResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
