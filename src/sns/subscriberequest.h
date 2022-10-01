// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBEREQUEST_H
#define QTAWS_SUBSCRIBEREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class SubscribeRequestPrivate;

class QTAWSSNS_EXPORT SubscribeRequest : public SnsRequest {

public:
    SubscribeRequest(const SubscribeRequest &other);
    SubscribeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
