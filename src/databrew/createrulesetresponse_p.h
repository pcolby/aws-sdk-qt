// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULESETRESPONSE_P_H
#define QTAWS_CREATERULESETRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class CreateRulesetResponse;

class CreateRulesetResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit CreateRulesetResponsePrivate(CreateRulesetResponse * const q);

    void parseCreateRulesetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRulesetResponse)
    Q_DISABLE_COPY(CreateRulesetResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
