// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECRYPTRESPONSE_P_H
#define QTAWS_DECRYPTRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class DecryptResponse;

class DecryptResponsePrivate : public KmsResponsePrivate {

public:

    explicit DecryptResponsePrivate(DecryptResponse * const q);

    void parseDecryptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DecryptResponse)
    Q_DISABLE_COPY(DecryptResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
