// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONSFORRESOURCERESPONSE_P_H
#define QTAWS_GETOPERATIONSFORRESOURCERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetOperationsForResourceResponse;

class GetOperationsForResourceResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetOperationsForResourceResponsePrivate(GetOperationsForResourceResponse * const q);

    void parseGetOperationsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOperationsForResourceResponse)
    Q_DISABLE_COPY(GetOperationsForResourceResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
