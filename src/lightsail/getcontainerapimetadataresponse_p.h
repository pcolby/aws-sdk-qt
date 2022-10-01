// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERAPIMETADATARESPONSE_P_H
#define QTAWS_GETCONTAINERAPIMETADATARESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetContainerAPIMetadataResponse;

class GetContainerAPIMetadataResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetContainerAPIMetadataResponsePrivate(GetContainerAPIMetadataResponse * const q);

    void parseGetContainerAPIMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerAPIMetadataResponse)
    Q_DISABLE_COPY(GetContainerAPIMetadataResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
