// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDELEGATEFROMRESOURCERESPONSE_P_H
#define QTAWS_DISASSOCIATEDELEGATEFROMRESOURCERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DisassociateDelegateFromResourceResponse;

class DisassociateDelegateFromResourceResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DisassociateDelegateFromResourceResponsePrivate(DisassociateDelegateFromResourceResponse * const q);

    void parseDisassociateDelegateFromResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDelegateFromResourceResponse)
    Q_DISABLE_COPY(DisassociateDelegateFromResourceResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
