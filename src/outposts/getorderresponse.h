// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORDERRESPONSE_H
#define QTAWS_GETORDERRESPONSE_H

#include "outpostsresponse.h"
#include "getorderrequest.h"

namespace QtAws {
namespace Outposts {

class GetOrderResponsePrivate;

class QTAWSOUTPOSTS_EXPORT GetOrderResponse : public OutpostsResponse {
    Q_OBJECT

public:
    GetOrderResponse(const GetOrderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOrderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrderResponse)
    Q_DISABLE_COPY(GetOrderResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
