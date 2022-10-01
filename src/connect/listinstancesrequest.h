// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESREQUEST_H
#define QTAWS_LISTINSTANCESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListInstancesRequestPrivate;

class QTAWSCONNECT_EXPORT ListInstancesRequest : public ConnectRequest {

public:
    ListInstancesRequest(const ListInstancesRequest &other);
    ListInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstancesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
