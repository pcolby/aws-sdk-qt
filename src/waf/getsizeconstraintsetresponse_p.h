// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIZECONSTRAINTSETRESPONSE_P_H
#define QTAWS_GETSIZECONSTRAINTSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetSizeConstraintSetResponse;

class GetSizeConstraintSetResponsePrivate : public WafResponsePrivate {

public:

    explicit GetSizeConstraintSetResponsePrivate(GetSizeConstraintSetResponse * const q);

    void parseGetSizeConstraintSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSizeConstraintSetResponse)
    Q_DISABLE_COPY(GetSizeConstraintSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
