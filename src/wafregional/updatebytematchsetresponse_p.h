// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBYTEMATCHSETRESPONSE_P_H
#define QTAWS_UPDATEBYTEMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class UpdateByteMatchSetResponse;

class UpdateByteMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit UpdateByteMatchSetResponsePrivate(UpdateByteMatchSetResponse * const q);

    void parseUpdateByteMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateByteMatchSetResponse)
    Q_DISABLE_COPY(UpdateByteMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
