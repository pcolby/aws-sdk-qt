// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINENDPOINTOPTIONSRESPONSE_P_H
#define QTAWS_UPDATEDOMAINENDPOINTOPTIONSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class UpdateDomainEndpointOptionsResponse;

class UpdateDomainEndpointOptionsResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit UpdateDomainEndpointOptionsResponsePrivate(UpdateDomainEndpointOptionsResponse * const q);

    void parseUpdateDomainEndpointOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainEndpointOptionsResponse)
    Q_DISABLE_COPY(UpdateDomainEndpointOptionsResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
