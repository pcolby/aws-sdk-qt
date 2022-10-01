// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEXECUTESTATEMENTREQUEST_H
#define QTAWS_BATCHEXECUTESTATEMENTREQUEST_H

#include "redshiftdatarequest.h"

namespace QtAws {
namespace RedshiftData {

class BatchExecuteStatementRequestPrivate;

class QTAWSREDSHIFTDATA_EXPORT BatchExecuteStatementRequest : public RedshiftDataRequest {

public:
    BatchExecuteStatementRequest(const BatchExecuteStatementRequest &other);
    BatchExecuteStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchExecuteStatementRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
