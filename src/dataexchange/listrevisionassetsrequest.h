// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVISIONASSETSREQUEST_H
#define QTAWS_LISTREVISIONASSETSREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class ListRevisionAssetsRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT ListRevisionAssetsRequest : public DataExchangeRequest {

public:
    ListRevisionAssetsRequest(const ListRevisionAssetsRequest &other);
    ListRevisionAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRevisionAssetsRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
