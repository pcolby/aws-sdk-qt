// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOCOMPONENTRESPONSE_P_H
#define QTAWS_GETSTUDIOCOMPONENTRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetStudioComponentResponse;

class GetStudioComponentResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetStudioComponentResponsePrivate(GetStudioComponentResponse * const q);

    void parseGetStudioComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStudioComponentResponse)
    Q_DISABLE_COPY(GetStudioComponentResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
