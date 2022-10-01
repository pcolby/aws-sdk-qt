// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYSIGNINGKEYRESPONSE_P_H
#define QTAWS_DELETEKEYSIGNINGKEYRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeleteKeySigningKeyResponse;

class DeleteKeySigningKeyResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeleteKeySigningKeyResponsePrivate(DeleteKeySigningKeyResponse * const q);

    void parseDeleteKeySigningKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteKeySigningKeyResponse)
    Q_DISABLE_COPY(DeleteKeySigningKeyResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
