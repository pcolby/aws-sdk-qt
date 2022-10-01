// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONSREQUEST_H
#define QTAWS_LISTSUBSCRIPTIONSREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class ListSubscriptionsRequestPrivate;

class QTAWSSNS_EXPORT ListSubscriptionsRequest : public SnsRequest {

public:
    ListSubscriptionsRequest(const ListSubscriptionsRequest &other);
    ListSubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscriptionsRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
