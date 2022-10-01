// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEGRANTRESPONSE_P_H
#define QTAWS_REVOKEGRANTRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class RevokeGrantResponse;

class RevokeGrantResponsePrivate : public KmsResponsePrivate {

public:

    explicit RevokeGrantResponsePrivate(RevokeGrantResponse * const q);

    void parseRevokeGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeGrantResponse)
    Q_DISABLE_COPY(RevokeGrantResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
