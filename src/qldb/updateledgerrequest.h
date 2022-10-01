// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELEDGERREQUEST_H
#define QTAWS_UPDATELEDGERREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class UpdateLedgerRequestPrivate;

class QTAWSQLDB_EXPORT UpdateLedgerRequest : public QldbRequest {

public:
    UpdateLedgerRequest(const UpdateLedgerRequest &other);
    UpdateLedgerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
