// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEGRAPHRESPONSE_P_H
#define QTAWS_GETSERVICEGRAPHRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetServiceGraphResponse;

class GetServiceGraphResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetServiceGraphResponsePrivate(GetServiceGraphResponse * const q);

    void parseGetServiceGraphResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceGraphResponse)
    Q_DISABLE_COPY(GetServiceGraphResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
