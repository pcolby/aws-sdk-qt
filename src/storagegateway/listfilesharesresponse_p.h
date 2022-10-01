// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILESHARESRESPONSE_P_H
#define QTAWS_LISTFILESHARESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListFileSharesResponse;

class ListFileSharesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListFileSharesResponsePrivate(ListFileSharesResponse * const q);

    void parseListFileSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFileSharesResponse)
    Q_DISABLE_COPY(ListFileSharesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
