// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELASTACCESSEDDETAILSRESPONSE_P_H
#define QTAWS_GETSERVICELASTACCESSEDDETAILSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetServiceLastAccessedDetailsResponse;

class GetServiceLastAccessedDetailsResponsePrivate : public IamResponsePrivate {

public:

    explicit GetServiceLastAccessedDetailsResponsePrivate(GetServiceLastAccessedDetailsResponse * const q);

    void parseGetServiceLastAccessedDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceLastAccessedDetailsResponse)
    Q_DISABLE_COPY(GetServiceLastAccessedDetailsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
