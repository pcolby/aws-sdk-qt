// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTYPERESPONSE_P_H
#define QTAWS_GETTYPERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetTypeResponse;

class GetTypeResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetTypeResponsePrivate(GetTypeResponse * const q);

    void parseGetTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTypeResponse)
    Q_DISABLE_COPY(GetTypeResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
