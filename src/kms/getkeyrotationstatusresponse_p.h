// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYROTATIONSTATUSRESPONSE_P_H
#define QTAWS_GETKEYROTATIONSTATUSRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GetKeyRotationStatusResponse;

class GetKeyRotationStatusResponsePrivate : public KmsResponsePrivate {

public:

    explicit GetKeyRotationStatusResponsePrivate(GetKeyRotationStatusResponse * const q);

    void parseGetKeyRotationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKeyRotationStatusResponse)
    Q_DISABLE_COPY(GetKeyRotationStatusResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
