// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBYTEMATCHSETRESPONSE_P_H
#define QTAWS_DELETEBYTEMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeleteByteMatchSetResponse;

class DeleteByteMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit DeleteByteMatchSetResponsePrivate(DeleteByteMatchSetResponse * const q);

    void parseDeleteByteMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteByteMatchSetResponse)
    Q_DISABLE_COPY(DeleteByteMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
