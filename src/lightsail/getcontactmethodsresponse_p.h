// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTMETHODSRESPONSE_P_H
#define QTAWS_GETCONTACTMETHODSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetContactMethodsResponse;

class GetContactMethodsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetContactMethodsResponsePrivate(GetContactMethodsResponse * const q);

    void parseGetContactMethodsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContactMethodsResponse)
    Q_DISABLE_COPY(GetContactMethodsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
