// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOOTSTRAPACTIONSRESPONSE_P_H
#define QTAWS_LISTBOOTSTRAPACTIONSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListBootstrapActionsResponse;

class ListBootstrapActionsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListBootstrapActionsResponsePrivate(ListBootstrapActionsResponse * const q);

    void parseListBootstrapActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBootstrapActionsResponse)
    Q_DISABLE_COPY(ListBootstrapActionsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
