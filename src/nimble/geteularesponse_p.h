// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEULARESPONSE_P_H
#define QTAWS_GETEULARESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetEulaResponse;

class GetEulaResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetEulaResponsePrivate(GetEulaResponse * const q);

    void parseGetEulaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEulaResponse)
    Q_DISABLE_COPY(GetEulaResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
