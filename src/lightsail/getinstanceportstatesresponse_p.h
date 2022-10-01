// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEPORTSTATESRESPONSE_P_H
#define QTAWS_GETINSTANCEPORTSTATESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetInstancePortStatesResponse;

class GetInstancePortStatesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetInstancePortStatesResponsePrivate(GetInstancePortStatesResponse * const q);

    void parseGetInstancePortStatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstancePortStatesResponse)
    Q_DISABLE_COPY(GetInstancePortStatesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
