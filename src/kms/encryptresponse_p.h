// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENCRYPTRESPONSE_P_H
#define QTAWS_ENCRYPTRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class EncryptResponse;

class EncryptResponsePrivate : public KmsResponsePrivate {

public:

    explicit EncryptResponsePrivate(EncryptResponse * const q);

    void parseEncryptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EncryptResponse)
    Q_DISABLE_COPY(EncryptResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
