// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULESETRESPONSE_P_H
#define QTAWS_UPDATERULESETRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class UpdateRulesetResponse;

class UpdateRulesetResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit UpdateRulesetResponsePrivate(UpdateRulesetResponse * const q);

    void parseUpdateRulesetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRulesetResponse)
    Q_DISABLE_COPY(UpdateRulesetResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
