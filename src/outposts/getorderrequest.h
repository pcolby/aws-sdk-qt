// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORDERREQUEST_H
#define QTAWS_GETORDERREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class GetOrderRequestPrivate;

class QTAWSOUTPOSTS_EXPORT GetOrderRequest : public OutpostsRequest {

public:
    GetOrderRequest(const GetOrderRequest &other);
    GetOrderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrderRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
