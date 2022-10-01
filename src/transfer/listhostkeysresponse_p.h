// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTKEYSRESPONSE_P_H
#define QTAWS_LISTHOSTKEYSRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class ListHostKeysResponse;

class ListHostKeysResponsePrivate : public TransferResponsePrivate {

public:

    explicit ListHostKeysResponsePrivate(ListHostKeysResponse * const q);

    void parseListHostKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHostKeysResponse)
    Q_DISABLE_COPY(ListHostKeysResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
