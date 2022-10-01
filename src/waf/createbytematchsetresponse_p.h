// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBYTEMATCHSETRESPONSE_P_H
#define QTAWS_CREATEBYTEMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateByteMatchSetResponse;

class CreateByteMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateByteMatchSetResponsePrivate(CreateByteMatchSetResponse * const q);

    void parseCreateByteMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateByteMatchSetResponse)
    Q_DISABLE_COPY(CreateByteMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
