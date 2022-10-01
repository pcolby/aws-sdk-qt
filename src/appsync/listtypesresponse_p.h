// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPESRESPONSE_P_H
#define QTAWS_LISTTYPESRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class ListTypesResponse;

class ListTypesResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit ListTypesResponsePrivate(ListTypesResponse * const q);

    void parseListTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTypesResponse)
    Q_DISABLE_COPY(ListTypesResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
