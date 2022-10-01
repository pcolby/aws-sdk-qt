// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGINGACCOUNTSRESPONSE_H
#define QTAWS_LISTSTAGINGACCOUNTSRESPONSE_H

#include "drsresponse.h"
#include "liststagingaccountsrequest.h"

namespace QtAws {
namespace Drs {

class ListStagingAccountsResponsePrivate;

class QTAWSDRS_EXPORT ListStagingAccountsResponse : public DrsResponse {
    Q_OBJECT

public:
    ListStagingAccountsResponse(const ListStagingAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStagingAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStagingAccountsResponse)
    Q_DISABLE_COPY(ListStagingAccountsResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
