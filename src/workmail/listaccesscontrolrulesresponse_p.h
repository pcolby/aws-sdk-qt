// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSCONTROLRULESRESPONSE_P_H
#define QTAWS_LISTACCESSCONTROLRULESRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListAccessControlRulesResponse;

class ListAccessControlRulesResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListAccessControlRulesResponsePrivate(ListAccessControlRulesResponse * const q);

    void parseListAccessControlRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessControlRulesResponse)
    Q_DISABLE_COPY(ListAccessControlRulesResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
