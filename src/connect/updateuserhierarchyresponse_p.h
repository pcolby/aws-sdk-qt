// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYRESPONSE_P_H
#define QTAWS_UPDATEUSERHIERARCHYRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyResponse;

class UpdateUserHierarchyResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateUserHierarchyResponsePrivate(UpdateUserHierarchyResponse * const q);

    void parseUpdateUserHierarchyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserHierarchyResponse)
    Q_DISABLE_COPY(UpdateUserHierarchyResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
