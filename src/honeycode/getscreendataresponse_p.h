// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCREENDATARESPONSE_P_H
#define QTAWS_GETSCREENDATARESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class GetScreenDataResponse;

class GetScreenDataResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit GetScreenDataResponsePrivate(GetScreenDataResponse * const q);

    void parseGetScreenDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetScreenDataResponse)
    Q_DISABLE_COPY(GetScreenDataResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
