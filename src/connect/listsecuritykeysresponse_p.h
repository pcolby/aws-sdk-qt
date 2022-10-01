// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYKEYSRESPONSE_P_H
#define QTAWS_LISTSECURITYKEYSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListSecurityKeysResponse;

class ListSecurityKeysResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListSecurityKeysResponsePrivate(ListSecurityKeysResponse * const q);

    void parseListSecurityKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSecurityKeysResponse)
    Q_DISABLE_COPY(ListSecurityKeysResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
