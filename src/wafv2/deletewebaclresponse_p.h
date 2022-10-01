// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBACLRESPONSE_P_H
#define QTAWS_DELETEWEBACLRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class DeleteWebACLResponse;

class DeleteWebACLResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit DeleteWebACLResponsePrivate(DeleteWebACLResponse * const q);

    void parseDeleteWebACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWebACLResponse)
    Q_DISABLE_COPY(DeleteWebACLResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
