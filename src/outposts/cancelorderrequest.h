// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELORDERREQUEST_H
#define QTAWS_CANCELORDERREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class CancelOrderRequestPrivate;

class QTAWSOUTPOSTS_EXPORT CancelOrderRequest : public OutpostsRequest {

public:
    CancelOrderRequest(const CancelOrderRequest &other);
    CancelOrderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelOrderRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
