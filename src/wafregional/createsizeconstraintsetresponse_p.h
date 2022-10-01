// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIZECONSTRAINTSETRESPONSE_P_H
#define QTAWS_CREATESIZECONSTRAINTSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class CreateSizeConstraintSetResponse;

class CreateSizeConstraintSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit CreateSizeConstraintSetResponsePrivate(CreateSizeConstraintSetResponse * const q);

    void parseCreateSizeConstraintSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSizeConstraintSetResponse)
    Q_DISABLE_COPY(CreateSizeConstraintSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
