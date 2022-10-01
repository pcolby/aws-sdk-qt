// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLICATEKEYRESPONSE_P_H
#define QTAWS_REPLICATEKEYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ReplicateKeyResponse;

class ReplicateKeyResponsePrivate : public KmsResponsePrivate {

public:

    explicit ReplicateKeyResponsePrivate(ReplicateKeyResponse * const q);

    void parseReplicateKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplicateKeyResponse)
    Q_DISABLE_COPY(ReplicateKeyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
