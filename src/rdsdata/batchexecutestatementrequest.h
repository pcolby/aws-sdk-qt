// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEXECUTESTATEMENTREQUEST_H
#define QTAWS_BATCHEXECUTESTATEMENTREQUEST_H

#include "rdsdatarequest.h"

namespace QtAws {
namespace RdsData {

class BatchExecuteStatementRequestPrivate;

class QTAWSRDSDATA_EXPORT BatchExecuteStatementRequest : public RdsDataRequest {

public:
    BatchExecuteStatementRequest(const BatchExecuteStatementRequest &other);
    BatchExecuteStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchExecuteStatementRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
