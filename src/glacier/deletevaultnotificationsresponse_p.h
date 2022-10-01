// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTNOTIFICATIONSRESPONSE_P_H
#define QTAWS_DELETEVAULTNOTIFICATIONSRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultNotificationsResponse;

class DeleteVaultNotificationsResponsePrivate : public GlacierResponsePrivate {

public:

    explicit DeleteVaultNotificationsResponsePrivate(DeleteVaultNotificationsResponse * const q);

    void parseDeleteVaultNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVaultNotificationsResponse)
    Q_DISABLE_COPY(DeleteVaultNotificationsResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
