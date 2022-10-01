// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORDERRESPONSE_H
#define QTAWS_CREATEORDERRESPONSE_H

#include "outpostsresponse.h"
#include "createorderrequest.h"

namespace QtAws {
namespace Outposts {

class CreateOrderResponsePrivate;

class QTAWSOUTPOSTS_EXPORT CreateOrderResponse : public OutpostsResponse {
    Q_OBJECT

public:
    CreateOrderResponse(const CreateOrderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOrderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOrderResponse)
    Q_DISABLE_COPY(CreateOrderResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
