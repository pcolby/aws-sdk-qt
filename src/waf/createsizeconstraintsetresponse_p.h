// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIZECONSTRAINTSETRESPONSE_P_H
#define QTAWS_CREATESIZECONSTRAINTSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateSizeConstraintSetResponse;

class CreateSizeConstraintSetResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateSizeConstraintSetResponsePrivate(CreateSizeConstraintSetResponse * const q);

    void parseCreateSizeConstraintSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSizeConstraintSetResponse)
    Q_DISABLE_COPY(CreateSizeConstraintSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
