// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPROVEDORIGINRESPONSE_P_H
#define QTAWS_ASSOCIATEAPPROVEDORIGINRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateApprovedOriginResponse;

class AssociateApprovedOriginResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateApprovedOriginResponsePrivate(AssociateApprovedOriginResponse * const q);

    void parseAssociateApprovedOriginResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateApprovedOriginResponse)
    Q_DISABLE_COPY(AssociateApprovedOriginResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
