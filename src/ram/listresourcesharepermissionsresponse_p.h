// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESHAREPERMISSIONSRESPONSE_P_H
#define QTAWS_LISTRESOURCESHAREPERMISSIONSRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class ListResourceSharePermissionsResponse;

class ListResourceSharePermissionsResponsePrivate : public RamResponsePrivate {

public:

    explicit ListResourceSharePermissionsResponsePrivate(ListResourceSharePermissionsResponse * const q);

    void parseListResourceSharePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceSharePermissionsResponse)
    Q_DISABLE_COPY(ListResourceSharePermissionsResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
