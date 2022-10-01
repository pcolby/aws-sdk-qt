// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTENCRYPTIONCONFIGRESPONSE_P_H
#define QTAWS_PUTENCRYPTIONCONFIGRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class PutEncryptionConfigResponse;

class PutEncryptionConfigResponsePrivate : public XRayResponsePrivate {

public:

    explicit PutEncryptionConfigResponsePrivate(PutEncryptionConfigResponse * const q);

    void parsePutEncryptionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEncryptionConfigResponse)
    Q_DISABLE_COPY(PutEncryptionConfigResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
