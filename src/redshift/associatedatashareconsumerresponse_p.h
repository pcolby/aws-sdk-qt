// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDATASHARECONSUMERRESPONSE_P_H
#define QTAWS_ASSOCIATEDATASHARECONSUMERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class AssociateDataShareConsumerResponse;

class AssociateDataShareConsumerResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit AssociateDataShareConsumerResponsePrivate(AssociateDataShareConsumerResponse * const q);

    void parseAssociateDataShareConsumerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDataShareConsumerResponse)
    Q_DISABLE_COPY(AssociateDataShareConsumerResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
