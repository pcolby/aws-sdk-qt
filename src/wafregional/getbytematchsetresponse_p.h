// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBYTEMATCHSETRESPONSE_P_H
#define QTAWS_GETBYTEMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetByteMatchSetResponse;

class GetByteMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetByteMatchSetResponsePrivate(GetByteMatchSetResponse * const q);

    void parseGetByteMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetByteMatchSetResponse)
    Q_DISABLE_COPY(GetByteMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
