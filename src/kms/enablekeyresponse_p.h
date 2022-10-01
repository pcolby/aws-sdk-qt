// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKEYRESPONSE_P_H
#define QTAWS_ENABLEKEYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class EnableKeyResponse;

class EnableKeyResponsePrivate : public KmsResponsePrivate {

public:

    explicit EnableKeyResponsePrivate(EnableKeyResponse * const q);

    void parseEnableKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableKeyResponse)
    Q_DISABLE_COPY(EnableKeyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
