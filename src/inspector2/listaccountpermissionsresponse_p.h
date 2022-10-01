// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTPERMISSIONSRESPONSE_P_H
#define QTAWS_LISTACCOUNTPERMISSIONSRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class ListAccountPermissionsResponse;

class ListAccountPermissionsResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit ListAccountPermissionsResponsePrivate(ListAccountPermissionsResponse * const q);

    void parseListAccountPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountPermissionsResponse)
    Q_DISABLE_COPY(ListAccountPermissionsResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
