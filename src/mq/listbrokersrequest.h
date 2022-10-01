// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBROKERSREQUEST_H
#define QTAWS_LISTBROKERSREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class ListBrokersRequestPrivate;

class QTAWSMQ_EXPORT ListBrokersRequest : public MqRequest {

public:
    ListBrokersRequest(const ListBrokersRequest &other);
    ListBrokersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBrokersRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
