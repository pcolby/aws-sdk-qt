// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONSRESPONSE_P_H
#define QTAWS_LISTACTIONSRESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class ListActionsResponse;

class ListActionsResponsePrivate : public FisResponsePrivate {

public:

    explicit ListActionsResponsePrivate(ListActionsResponse * const q);

    void parseListActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListActionsResponse)
    Q_DISABLE_COPY(ListActionsResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif
