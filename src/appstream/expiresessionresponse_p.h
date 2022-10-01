// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPIRESESSIONRESPONSE_P_H
#define QTAWS_EXPIRESESSIONRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class ExpireSessionResponse;

class ExpireSessionResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit ExpireSessionResponsePrivate(ExpireSessionResponse * const q);

    void parseExpireSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExpireSessionResponse)
    Q_DISABLE_COPY(ExpireSessionResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
