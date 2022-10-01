// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTANCHORSRESPONSE_P_H
#define QTAWS_LISTTRUSTANCHORSRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class ListTrustAnchorsResponse;

class ListTrustAnchorsResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit ListTrustAnchorsResponsePrivate(ListTrustAnchorsResponse * const q);

    void parseListTrustAnchorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrustAnchorsResponse)
    Q_DISABLE_COPY(ListTrustAnchorsResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
