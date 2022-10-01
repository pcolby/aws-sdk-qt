// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDATASHARECONSUMERRESPONSE_P_H
#define QTAWS_DISASSOCIATEDATASHARECONSUMERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DisassociateDataShareConsumerResponse;

class DisassociateDataShareConsumerResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DisassociateDataShareConsumerResponsePrivate(DisassociateDataShareConsumerResponse * const q);

    void parseDisassociateDataShareConsumerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDataShareConsumerResponse)
    Q_DISABLE_COPY(DisassociateDataShareConsumerResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
