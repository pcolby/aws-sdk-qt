// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOCALDISKSRESPONSE_P_H
#define QTAWS_LISTLOCALDISKSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListLocalDisksResponse;

class ListLocalDisksResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListLocalDisksResponsePrivate(ListLocalDisksResponse * const q);

    void parseListLocalDisksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLocalDisksResponse)
    Q_DISABLE_COPY(ListLocalDisksResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
