// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_JOINDOMAINRESPONSE_P_H
#define QTAWS_JOINDOMAINRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class JoinDomainResponse;

class JoinDomainResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit JoinDomainResponsePrivate(JoinDomainResponse * const q);

    void parseJoinDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(JoinDomainResponse)
    Q_DISABLE_COPY(JoinDomainResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
