// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATENODERESPONSE_P_H
#define QTAWS_ASSOCIATENODERESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class AssociateNodeResponse;

class AssociateNodeResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit AssociateNodeResponsePrivate(AssociateNodeResponse * const q);

    void parseAssociateNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateNodeResponse)
    Q_DISABLE_COPY(AssociateNodeResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
