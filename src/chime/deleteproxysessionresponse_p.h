// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROXYSESSIONRESPONSE_P_H
#define QTAWS_DELETEPROXYSESSIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteProxySessionResponse;

class DeleteProxySessionResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteProxySessionResponsePrivate(DeleteProxySessionResponse * const q);

    void parseDeleteProxySessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProxySessionResponse)
    Q_DISABLE_COPY(DeleteProxySessionResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
