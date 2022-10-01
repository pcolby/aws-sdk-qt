// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROXYSESSIONRESPONSE_P_H
#define QTAWS_CREATEPROXYSESSIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateProxySessionResponse;

class CreateProxySessionResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateProxySessionResponsePrivate(CreateProxySessionResponse * const q);

    void parseCreateProxySessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProxySessionResponse)
    Q_DISABLE_COPY(CreateProxySessionResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
