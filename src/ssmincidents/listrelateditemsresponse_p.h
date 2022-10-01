// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRELATEDITEMSRESPONSE_P_H
#define QTAWS_LISTRELATEDITEMSRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class ListRelatedItemsResponse;

class ListRelatedItemsResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit ListRelatedItemsResponsePrivate(ListRelatedItemsResponse * const q);

    void parseListRelatedItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRelatedItemsResponse)
    Q_DISABLE_COPY(ListRelatedItemsResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
