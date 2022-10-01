// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPLICATIONFLEETRESPONSE_P_H
#define QTAWS_DISASSOCIATEAPPLICATIONFLEETRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DisassociateApplicationFleetResponse;

class DisassociateApplicationFleetResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DisassociateApplicationFleetResponsePrivate(DisassociateApplicationFleetResponse * const q);

    void parseDisassociateApplicationFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateApplicationFleetResponse)
    Q_DISABLE_COPY(DisassociateApplicationFleetResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
