// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONSRESPONSE_P_H
#define QTAWS_GETOPERATIONSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetOperationsResponse;

class GetOperationsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetOperationsResponsePrivate(GetOperationsResponse * const q);

    void parseGetOperationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOperationsResponse)
    Q_DISABLE_COPY(GetOperationsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
