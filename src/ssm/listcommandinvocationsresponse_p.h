// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMMANDINVOCATIONSRESPONSE_P_H
#define QTAWS_LISTCOMMANDINVOCATIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListCommandInvocationsResponse;

class ListCommandInvocationsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListCommandInvocationsResponsePrivate(ListCommandInvocationsResponse * const q);

    void parseListCommandInvocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCommandInvocationsResponse)
    Q_DISABLE_COPY(ListCommandInvocationsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
