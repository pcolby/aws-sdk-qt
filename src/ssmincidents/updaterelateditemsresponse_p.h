// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATEDITEMSRESPONSE_P_H
#define QTAWS_UPDATERELATEDITEMSRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateRelatedItemsResponse;

class UpdateRelatedItemsResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit UpdateRelatedItemsResponsePrivate(UpdateRelatedItemsResponse * const q);

    void parseUpdateRelatedItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRelatedItemsResponse)
    Q_DISABLE_COPY(UpdateRelatedItemsResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
