// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELEDGERREQUEST_H
#define QTAWS_CREATELEDGERREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class CreateLedgerRequestPrivate;

class QTAWSQLDB_EXPORT CreateLedgerRequest : public QldbRequest {

public:
    CreateLedgerRequest(const CreateLedgerRequest &other);
    CreateLedgerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
