// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECRLRESPONSE_P_H
#define QTAWS_DELETECRLRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteCrlResponse;

class DeleteCrlResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit DeleteCrlResponsePrivate(DeleteCrlResponse * const q);

    void parseDeleteCrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCrlResponse)
    Q_DISABLE_COPY(DeleteCrlResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
