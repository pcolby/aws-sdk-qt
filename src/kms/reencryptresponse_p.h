// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REENCRYPTRESPONSE_P_H
#define QTAWS_REENCRYPTRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ReEncryptResponse;

class ReEncryptResponsePrivate : public KmsResponsePrivate {

public:

    explicit ReEncryptResponsePrivate(ReEncryptResponse * const q);

    void parseReEncryptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReEncryptResponse)
    Q_DISABLE_COPY(ReEncryptResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
