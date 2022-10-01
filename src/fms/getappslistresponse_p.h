// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPSLISTRESPONSE_P_H
#define QTAWS_GETAPPSLISTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class GetAppsListResponse;

class GetAppsListResponsePrivate : public FmsResponsePrivate {

public:

    explicit GetAppsListResponsePrivate(GetAppsListResponse * const q);

    void parseGetAppsListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppsListResponse)
    Q_DISABLE_COPY(GetAppsListResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
