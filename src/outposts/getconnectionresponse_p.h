// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONRESPONSE_P_H
#define QTAWS_GETCONNECTIONRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class GetConnectionResponse;

class GetConnectionResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit GetConnectionResponsePrivate(GetConnectionResponse * const q);

    void parseGetConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectionResponse)
    Q_DISABLE_COPY(GetConnectionResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
