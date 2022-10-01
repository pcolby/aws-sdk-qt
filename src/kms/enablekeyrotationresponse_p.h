// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKEYROTATIONRESPONSE_P_H
#define QTAWS_ENABLEKEYROTATIONRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class EnableKeyRotationResponse;

class EnableKeyRotationResponsePrivate : public KmsResponsePrivate {

public:

    explicit EnableKeyRotationResponsePrivate(EnableKeyRotationResponse * const q);

    void parseEnableKeyRotationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableKeyRotationResponse)
    Q_DISABLE_COPY(EnableKeyRotationResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
