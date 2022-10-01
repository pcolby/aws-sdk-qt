// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKEYROTATIONRESPONSE_P_H
#define QTAWS_DISABLEKEYROTATIONRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class DisableKeyRotationResponse;

class DisableKeyRotationResponsePrivate : public KmsResponsePrivate {

public:

    explicit DisableKeyRotationResponsePrivate(DisableKeyRotationResponse * const q);

    void parseDisableKeyRotationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableKeyRotationResponse)
    Q_DISABLE_COPY(DisableKeyRotationResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
