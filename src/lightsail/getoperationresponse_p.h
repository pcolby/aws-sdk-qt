// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONRESPONSE_P_H
#define QTAWS_GETOPERATIONRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetOperationResponse;

class GetOperationResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetOperationResponsePrivate(GetOperationResponse * const q);

    void parseGetOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOperationResponse)
    Q_DISABLE_COPY(GetOperationResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
