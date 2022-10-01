// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSKEYSRESPONSE_P_H
#define QTAWS_LISTACCESSKEYSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListAccessKeysResponse;

class ListAccessKeysResponsePrivate : public IamResponsePrivate {

public:

    explicit ListAccessKeysResponsePrivate(ListAccessKeysResponse * const q);

    void parseListAccessKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessKeysResponse)
    Q_DISABLE_COPY(ListAccessKeysResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
