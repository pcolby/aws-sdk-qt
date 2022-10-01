// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERSRESPONSE_P_H
#define QTAWS_LISTRESOLVERSRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class ListResolversResponse;

class ListResolversResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit ListResolversResponsePrivate(ListResolversResponse * const q);

    void parseListResolversResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolversResponse)
    Q_DISABLE_COPY(ListResolversResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
