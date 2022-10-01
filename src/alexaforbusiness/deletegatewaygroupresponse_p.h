// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYGROUPRESPONSE_P_H
#define QTAWS_DELETEGATEWAYGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteGatewayGroupResponse;

class DeleteGatewayGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteGatewayGroupResponsePrivate(DeleteGatewayGroupResponse * const q);

    void parseDeleteGatewayGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayGroupResponse)
    Q_DISABLE_COPY(DeleteGatewayGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
