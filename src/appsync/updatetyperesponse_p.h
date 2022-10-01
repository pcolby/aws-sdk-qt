// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETYPERESPONSE_P_H
#define QTAWS_UPDATETYPERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class UpdateTypeResponse;

class UpdateTypeResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit UpdateTypeResponsePrivate(UpdateTypeResponse * const q);

    void parseUpdateTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTypeResponse)
    Q_DISABLE_COPY(UpdateTypeResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
