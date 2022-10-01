// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPROVEDORIGINRESPONSE_P_H
#define QTAWS_DISASSOCIATEAPPROVEDORIGINRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociateApprovedOriginResponse;

class DisassociateApprovedOriginResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociateApprovedOriginResponsePrivate(DisassociateApprovedOriginResponse * const q);

    void parseDisassociateApprovedOriginResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateApprovedOriginResponse)
    Q_DISABLE_COPY(DisassociateApprovedOriginResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
