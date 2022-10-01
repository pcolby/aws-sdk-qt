// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFLEETRESPONSE_P_H
#define QTAWS_DISASSOCIATEFLEETRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DisassociateFleetResponse;

class DisassociateFleetResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DisassociateFleetResponsePrivate(DisassociateFleetResponse * const q);

    void parseDisassociateFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFleetResponse)
    Q_DISABLE_COPY(DisassociateFleetResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
