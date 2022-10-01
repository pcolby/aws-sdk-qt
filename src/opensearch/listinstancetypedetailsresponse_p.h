// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCETYPEDETAILSRESPONSE_P_H
#define QTAWS_LISTINSTANCETYPEDETAILSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class ListInstanceTypeDetailsResponse;

class ListInstanceTypeDetailsResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit ListInstanceTypeDetailsResponsePrivate(ListInstanceTypeDetailsResponse * const q);

    void parseListInstanceTypeDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstanceTypeDetailsResponse)
    Q_DISABLE_COPY(ListInstanceTypeDetailsResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
