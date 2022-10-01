// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYRESPONSE_P_H
#define QTAWS_CREATEKEYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class CreateKeyResponse;

class CreateKeyResponsePrivate : public KmsResponsePrivate {

public:

    explicit CreateKeyResponsePrivate(CreateKeyResponse * const q);

    void parseCreateKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateKeyResponse)
    Q_DISABLE_COPY(CreateKeyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
