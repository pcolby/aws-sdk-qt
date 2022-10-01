// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELORDERRESPONSE_H
#define QTAWS_CANCELORDERRESPONSE_H

#include "outpostsresponse.h"
#include "cancelorderrequest.h"

namespace QtAws {
namespace Outposts {

class CancelOrderResponsePrivate;

class QTAWSOUTPOSTS_EXPORT CancelOrderResponse : public OutpostsResponse {
    Q_OBJECT

public:
    CancelOrderResponse(const CancelOrderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelOrderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelOrderResponse)
    Q_DISABLE_COPY(CancelOrderResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
