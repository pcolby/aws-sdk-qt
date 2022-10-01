// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEDGERSREQUEST_H
#define QTAWS_LISTLEDGERSREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class ListLedgersRequestPrivate;

class QTAWSQLDB_EXPORT ListLedgersRequest : public QldbRequest {

public:
    ListLedgersRequest(const ListLedgersRequest &other);
    ListLedgersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLedgersRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
