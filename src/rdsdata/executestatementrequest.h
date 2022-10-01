// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESTATEMENTREQUEST_H
#define QTAWS_EXECUTESTATEMENTREQUEST_H

#include "rdsdatarequest.h"

namespace QtAws {
namespace RdsData {

class ExecuteStatementRequestPrivate;

class QTAWSRDSDATA_EXPORT ExecuteStatementRequest : public RdsDataRequest {

public:
    ExecuteStatementRequest(const ExecuteStatementRequest &other);
    ExecuteStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteStatementRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
