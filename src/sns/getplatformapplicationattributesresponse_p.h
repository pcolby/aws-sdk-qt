// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLATFORMAPPLICATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_GETPLATFORMAPPLICATIONATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class GetPlatformApplicationAttributesResponse;

class GetPlatformApplicationAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit GetPlatformApplicationAttributesResponsePrivate(GetPlatformApplicationAttributesResponse * const q);

    void parseGetPlatformApplicationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPlatformApplicationAttributesResponse)
    Q_DISABLE_COPY(GetPlatformApplicationAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
