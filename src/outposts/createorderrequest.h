// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORDERREQUEST_H
#define QTAWS_CREATEORDERREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class CreateOrderRequestPrivate;

class QTAWSOUTPOSTS_EXPORT CreateOrderRequest : public OutpostsRequest {

public:
    CreateOrderRequest(const CreateOrderRequest &other);
    CreateOrderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOrderRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
