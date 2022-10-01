// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTFROMSERVICERESPONSE_P_H
#define QTAWS_DISCONNECTFROMSERVICERESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DisconnectFromServiceResponse;

class DisconnectFromServiceResponsePrivate : public MgnResponsePrivate {

public:

    explicit DisconnectFromServiceResponsePrivate(DisconnectFromServiceResponse * const q);

    void parseDisconnectFromServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisconnectFromServiceResponse)
    Q_DISABLE_COPY(DisconnectFromServiceResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
