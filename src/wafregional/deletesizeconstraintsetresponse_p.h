// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIZECONSTRAINTSETRESPONSE_P_H
#define QTAWS_DELETESIZECONSTRAINTSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class DeleteSizeConstraintSetResponse;

class DeleteSizeConstraintSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit DeleteSizeConstraintSetResponsePrivate(DeleteSizeConstraintSetResponse * const q);

    void parseDeleteSizeConstraintSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSizeConstraintSetResponse)
    Q_DISABLE_COPY(DeleteSizeConstraintSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
