// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROXYSESSIONRESPONSE_P_H
#define QTAWS_UPDATEPROXYSESSIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateProxySessionResponse;

class UpdateProxySessionResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateProxySessionResponsePrivate(UpdateProxySessionResponse * const q);

    void parseUpdateProxySessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProxySessionResponse)
    Q_DISABLE_COPY(UpdateProxySessionResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
