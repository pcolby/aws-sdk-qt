// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIZECONSTRAINTSETRESPONSE_P_H
#define QTAWS_UPDATESIZECONSTRAINTSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateSizeConstraintSetResponse;

class UpdateSizeConstraintSetResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateSizeConstraintSetResponsePrivate(UpdateSizeConstraintSetResponse * const q);

    void parseUpdateSizeConstraintSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSizeConstraintSetResponse)
    Q_DISABLE_COPY(UpdateSizeConstraintSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
