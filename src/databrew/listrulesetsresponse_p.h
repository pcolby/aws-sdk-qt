// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESETSRESPONSE_P_H
#define QTAWS_LISTRULESETSRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class ListRulesetsResponse;

class ListRulesetsResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit ListRulesetsResponsePrivate(ListRulesetsResponse * const q);

    void parseListRulesetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRulesetsResponse)
    Q_DISABLE_COPY(ListRulesetsResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
