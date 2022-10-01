// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKEYRESPONSE_P_H
#define QTAWS_DISABLEKEYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class DisableKeyResponse;

class DisableKeyResponsePrivate : public KmsResponsePrivate {

public:

    explicit DisableKeyResponsePrivate(DisableKeyResponse * const q);

    void parseDisableKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableKeyResponse)
    Q_DISABLE_COPY(DisableKeyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
