// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERLOGRESPONSE_P_H
#define QTAWS_GETCONTAINERLOGRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetContainerLogResponse;

class GetContainerLogResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetContainerLogResponsePrivate(GetContainerLogResponse * const q);

    void parseGetContainerLogResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerLogResponse)
    Q_DISABLE_COPY(GetContainerLogResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
