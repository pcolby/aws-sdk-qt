// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYSRESPONSE_P_H
#define QTAWS_LISTKEYSRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ListKeysResponse;

class ListKeysResponsePrivate : public KmsResponsePrivate {

public:

    explicit ListKeysResponsePrivate(ListKeysResponse * const q);

    void parseListKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListKeysResponse)
    Q_DISABLE_COPY(ListKeysResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
