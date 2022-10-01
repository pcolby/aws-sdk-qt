// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBYTEMATCHSETRESPONSE_P_H
#define QTAWS_UPDATEBYTEMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateByteMatchSetResponse;

class UpdateByteMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateByteMatchSetResponsePrivate(UpdateByteMatchSetResponse * const q);

    void parseUpdateByteMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateByteMatchSetResponse)
    Q_DISABLE_COPY(UpdateByteMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
