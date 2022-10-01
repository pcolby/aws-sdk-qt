// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGINGACCOUNTSREQUEST_H
#define QTAWS_LISTSTAGINGACCOUNTSREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class ListStagingAccountsRequestPrivate;

class QTAWSDRS_EXPORT ListStagingAccountsRequest : public DrsRequest {

public:
    ListStagingAccountsRequest(const ListStagingAccountsRequest &other);
    ListStagingAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStagingAccountsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
