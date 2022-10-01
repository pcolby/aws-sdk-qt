// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDNODEEXCHANGECONFIGURATIONOPTIONSRESPONSE_P_H
#define QTAWS_GETRESERVEDNODEEXCHANGECONFIGURATIONOPTIONSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class GetReservedNodeExchangeConfigurationOptionsResponse;

class GetReservedNodeExchangeConfigurationOptionsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit GetReservedNodeExchangeConfigurationOptionsResponsePrivate(GetReservedNodeExchangeConfigurationOptionsResponse * const q);

    void parseGetReservedNodeExchangeConfigurationOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReservedNodeExchangeConfigurationOptionsResponse)
    Q_DISABLE_COPY(GetReservedNodeExchangeConfigurationOptionsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
