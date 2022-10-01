// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEREQUEST_H
#define QTAWS_UNSUBSCRIBEREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class UnsubscribeRequestPrivate;

class QTAWSSNS_EXPORT UnsubscribeRequest : public SnsRequest {

public:
    UnsubscribeRequest(const UnsubscribeRequest &other);
    UnsubscribeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnsubscribeRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
