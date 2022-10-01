// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAPESRESPONSE_P_H
#define QTAWS_LISTTAPESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListTapesResponse;

class ListTapesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListTapesResponsePrivate(ListTapesResponse * const q);

    void parseListTapesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTapesResponse)
    Q_DISABLE_COPY(ListTapesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
