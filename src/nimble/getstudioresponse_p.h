// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIORESPONSE_P_H
#define QTAWS_GETSTUDIORESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetStudioResponse;

class GetStudioResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetStudioResponsePrivate(GetStudioResponse * const q);

    void parseGetStudioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStudioResponse)
    Q_DISABLE_COPY(GetStudioResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
