// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIZECONSTRAINTSETRESPONSE_P_H
#define QTAWS_GETSIZECONSTRAINTSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetSizeConstraintSetResponse;

class GetSizeConstraintSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetSizeConstraintSetResponsePrivate(GetSizeConstraintSetResponse * const q);

    void parseGetSizeConstraintSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSizeConstraintSetResponse)
    Q_DISABLE_COPY(GetSizeConstraintSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
