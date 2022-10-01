// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYSRESPONSE_H
#define QTAWS_LISTGATEWAYSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listgatewaysrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListGatewaysResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListGatewaysResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListGatewaysResponse(const ListGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGatewaysResponse)
    Q_DISABLE_COPY(ListGatewaysResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
