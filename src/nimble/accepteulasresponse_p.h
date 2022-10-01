// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTEULASRESPONSE_P_H
#define QTAWS_ACCEPTEULASRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class AcceptEulasResponse;

class AcceptEulasResponsePrivate : public NimbleResponsePrivate {

public:

    explicit AcceptEulasResponsePrivate(AcceptEulasResponse * const q);

    void parseAcceptEulasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptEulasResponse)
    Q_DISABLE_COPY(AcceptEulasResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
