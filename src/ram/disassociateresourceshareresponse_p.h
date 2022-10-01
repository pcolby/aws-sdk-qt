// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCESHARERESPONSE_P_H
#define QTAWS_DISASSOCIATERESOURCESHARERESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class DisassociateResourceShareResponse;

class DisassociateResourceShareResponsePrivate : public RamResponsePrivate {

public:

    explicit DisassociateResourceShareResponsePrivate(DisassociateResourceShareResponse * const q);

    void parseDisassociateResourceShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateResourceShareResponse)
    Q_DISABLE_COPY(DisassociateResourceShareResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
