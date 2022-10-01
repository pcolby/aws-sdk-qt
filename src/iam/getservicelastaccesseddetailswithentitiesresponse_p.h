// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELASTACCESSEDDETAILSWITHENTITIESRESPONSE_P_H
#define QTAWS_GETSERVICELASTACCESSEDDETAILSWITHENTITIESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetServiceLastAccessedDetailsWithEntitiesResponse;

class GetServiceLastAccessedDetailsWithEntitiesResponsePrivate : public IamResponsePrivate {

public:

    explicit GetServiceLastAccessedDetailsWithEntitiesResponsePrivate(GetServiceLastAccessedDetailsWithEntitiesResponse * const q);

    void parseGetServiceLastAccessedDetailsWithEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceLastAccessedDetailsWithEntitiesResponse)
    Q_DISABLE_COPY(GetServiceLastAccessedDetailsWithEntitiesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
