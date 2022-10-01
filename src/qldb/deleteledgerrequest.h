// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELEDGERREQUEST_H
#define QTAWS_DELETELEDGERREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class DeleteLedgerRequestPrivate;

class QTAWSQLDB_EXPORT DeleteLedgerRequest : public QldbRequest {

public:
    DeleteLedgerRequest(const DeleteLedgerRequest &other);
    DeleteLedgerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
