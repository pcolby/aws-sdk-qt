// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYEXECUTIONREQUEST_H
#define QTAWS_GETQUERYEXECUTIONREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class GetQueryExecutionRequestPrivate;

class QTAWSATHENA_EXPORT GetQueryExecutionRequest : public AthenaRequest {

public:
    GetQueryExecutionRequest(const GetQueryExecutionRequest &other);
    GetQueryExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryExecutionRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
