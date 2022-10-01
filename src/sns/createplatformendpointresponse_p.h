// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMENDPOINTRESPONSE_P_H
#define QTAWS_CREATEPLATFORMENDPOINTRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class CreatePlatformEndpointResponse;

class CreatePlatformEndpointResponsePrivate : public SnsResponsePrivate {

public:

    explicit CreatePlatformEndpointResponsePrivate(CreatePlatformEndpointResponse * const q);

    void parseCreatePlatformEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlatformEndpointResponse)
    Q_DISABLE_COPY(CreatePlatformEndpointResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
