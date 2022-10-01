// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDNODEEXCHANGECONFIGURATIONOPTIONSRESPONSE_H
#define QTAWS_GETRESERVEDNODEEXCHANGECONFIGURATIONOPTIONSRESPONSE_H

#include "redshiftresponse.h"
#include "getreservednodeexchangeconfigurationoptionsrequest.h"

namespace QtAws {
namespace Redshift {

class GetReservedNodeExchangeConfigurationOptionsResponsePrivate;

class QTAWSREDSHIFT_EXPORT GetReservedNodeExchangeConfigurationOptionsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    GetReservedNodeExchangeConfigurationOptionsResponse(const GetReservedNodeExchangeConfigurationOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReservedNodeExchangeConfigurationOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservedNodeExchangeConfigurationOptionsResponse)
    Q_DISABLE_COPY(GetReservedNodeExchangeConfigurationOptionsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
