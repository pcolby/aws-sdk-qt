// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVAULTNOTIFICATIONSRESPONSE_P_H
#define QTAWS_SETVAULTNOTIFICATIONSRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class SetVaultNotificationsResponse;

class SetVaultNotificationsResponsePrivate : public GlacierResponsePrivate {

public:

    explicit SetVaultNotificationsResponsePrivate(SetVaultNotificationsResponse * const q);

    void parseSetVaultNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetVaultNotificationsResponse)
    Q_DISABLE_COPY(SetVaultNotificationsResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
