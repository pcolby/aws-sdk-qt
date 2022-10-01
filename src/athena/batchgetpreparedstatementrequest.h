// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPREPAREDSTATEMENTREQUEST_H
#define QTAWS_BATCHGETPREPAREDSTATEMENTREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class BatchGetPreparedStatementRequestPrivate;

class QTAWSATHENA_EXPORT BatchGetPreparedStatementRequest : public AthenaRequest {

public:
    BatchGetPreparedStatementRequest(const BatchGetPreparedStatementRequest &other);
    BatchGetPreparedStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetPreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
