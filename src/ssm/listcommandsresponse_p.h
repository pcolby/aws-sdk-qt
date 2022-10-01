// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMMANDSRESPONSE_P_H
#define QTAWS_LISTCOMMANDSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListCommandsResponse;

class ListCommandsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListCommandsResponsePrivate(ListCommandsResponse * const q);

    void parseListCommandsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCommandsResponse)
    Q_DISABLE_COPY(ListCommandsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
