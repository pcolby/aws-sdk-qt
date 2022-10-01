// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENCRYPTIONCONFIGRESPONSE_P_H
#define QTAWS_GETENCRYPTIONCONFIGRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetEncryptionConfigResponse;

class GetEncryptionConfigResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetEncryptionConfigResponsePrivate(GetEncryptionConfigResponse * const q);

    void parseGetEncryptionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEncryptionConfigResponse)
    Q_DISABLE_COPY(GetEncryptionConfigResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
