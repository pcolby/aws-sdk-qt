// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROXYSESSIONRESPONSE_P_H
#define QTAWS_GETPROXYSESSIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetProxySessionResponse;

class GetProxySessionResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetProxySessionResponsePrivate(GetProxySessionResponse * const q);

    void parseGetProxySessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProxySessionResponse)
    Q_DISABLE_COPY(GetProxySessionResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
