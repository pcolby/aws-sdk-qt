// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYEXECUTIONREQUEST_H
#define QTAWS_STARTQUERYEXECUTIONREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class StartQueryExecutionRequestPrivate;

class QTAWSATHENA_EXPORT StartQueryExecutionRequest : public AthenaRequest {

public:
    StartQueryExecutionRequest(const StartQueryExecutionRequest &other);
    StartQueryExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartQueryExecutionRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
