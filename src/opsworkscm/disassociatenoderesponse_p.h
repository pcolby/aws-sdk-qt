// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATENODERESPONSE_P_H
#define QTAWS_DISASSOCIATENODERESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class DisassociateNodeResponse;

class DisassociateNodeResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit DisassociateNodeResponsePrivate(DisassociateNodeResponse * const q);

    void parseDisassociateNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateNodeResponse)
    Q_DISABLE_COPY(DisassociateNodeResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
