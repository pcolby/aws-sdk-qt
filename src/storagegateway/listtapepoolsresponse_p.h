// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAPEPOOLSRESPONSE_P_H
#define QTAWS_LISTTAPEPOOLSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListTapePoolsResponse;

class ListTapePoolsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListTapePoolsResponsePrivate(ListTapePoolsResponse * const q);

    void parseListTapePoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTapePoolsResponse)
    Q_DISABLE_COPY(ListTapePoolsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
