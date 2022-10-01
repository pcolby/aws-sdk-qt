// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORSREQUEST_H
#define QTAWS_LISTCONNECTORSREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ListConnectorsRequestPrivate;

class QTAWSTRANSFER_EXPORT ListConnectorsRequest : public TransferRequest {

public:
    ListConnectorsRequest(const ListConnectorsRequest &other);
    ListConnectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorsRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
