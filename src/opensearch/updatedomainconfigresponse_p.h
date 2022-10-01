// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONFIGRESPONSE_P_H
#define QTAWS_UPDATEDOMAINCONFIGRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class UpdateDomainConfigResponse;

class UpdateDomainConfigResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit UpdateDomainConfigResponsePrivate(UpdateDomainConfigResponse * const q);

    void parseUpdateDomainConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainConfigResponse)
    Q_DISABLE_COPY(UpdateDomainConfigResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
