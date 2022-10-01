// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTNOTIFICATIONSRESPONSE_P_H
#define QTAWS_GETVAULTNOTIFICATIONSRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class GetVaultNotificationsResponse;

class GetVaultNotificationsResponsePrivate : public GlacierResponsePrivate {

public:

    explicit GetVaultNotificationsResponsePrivate(GetVaultNotificationsResponse * const q);

    void parseGetVaultNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVaultNotificationsResponse)
    Q_DISABLE_COPY(GetVaultNotificationsResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
