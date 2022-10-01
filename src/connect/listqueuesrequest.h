// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUESREQUEST_H
#define QTAWS_LISTQUEUESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListQueuesRequestPrivate;

class QTAWSCONNECT_EXPORT ListQueuesRequest : public ConnectRequest {

public:
    ListQueuesRequest(const ListQueuesRequest &other);
    ListQueuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
