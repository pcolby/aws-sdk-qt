// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULESETRESPONSE_P_H
#define QTAWS_DELETERULESETRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class DeleteRulesetResponse;

class DeleteRulesetResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit DeleteRulesetResponsePrivate(DeleteRulesetResponse * const q);

    void parseDeleteRulesetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRulesetResponse)
    Q_DISABLE_COPY(DeleteRulesetResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
