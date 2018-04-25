/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_METERUSAGERESPONSE_H
#define QTAWS_METERUSAGERESPONSE_H

#include "marketplacemeteringresponse.h"
#include "meterusagerequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class MeterUsageResponsePrivate;

class QTAWS_EXPORT MeterUsageResponse : public MarketplaceMeteringResponse {
    Q_OBJECT

public:
    MeterUsageResponse(const MeterUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MeterUsageRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(MeterUsageResponse)
    Q_DISABLE_COPY(MeterUsageResponse)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
