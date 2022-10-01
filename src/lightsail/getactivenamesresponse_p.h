// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIVENAMESRESPONSE_P_H
#define QTAWS_GETACTIVENAMESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetActiveNamesResponse;

class GetActiveNamesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetActiveNamesResponsePrivate(GetActiveNamesResponse * const q);

    void parseGetActiveNamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetActiveNamesResponse)
    Q_DISABLE_COPY(GetActiveNamesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
