// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERIMAGESRESPONSE_P_H
#define QTAWS_GETCONTAINERIMAGESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetContainerImagesResponse;

class GetContainerImagesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetContainerImagesResponsePrivate(GetContainerImagesResponse * const q);

    void parseGetContainerImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerImagesResponse)
    Q_DISABLE_COPY(GetContainerImagesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
