// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMKEYSRESPONSE_P_H
#define QTAWS_LISTSTREAMKEYSRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class ListStreamKeysResponse;

class ListStreamKeysResponsePrivate : public IvsResponsePrivate {

public:

    explicit ListStreamKeysResponsePrivate(ListStreamKeysResponse * const q);

    void parseListStreamKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamKeysResponse)
    Q_DISABLE_COPY(ListStreamKeysResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
