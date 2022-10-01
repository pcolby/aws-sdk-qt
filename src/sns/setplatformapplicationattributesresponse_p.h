// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPLATFORMAPPLICATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_SETPLATFORMAPPLICATIONATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class SetPlatformApplicationAttributesResponse;

class SetPlatformApplicationAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit SetPlatformApplicationAttributesResponsePrivate(SetPlatformApplicationAttributesResponse * const q);

    void parseSetPlatformApplicationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetPlatformApplicationAttributesResponse)
    Q_DISABLE_COPY(SetPlatformApplicationAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
