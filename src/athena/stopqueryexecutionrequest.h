// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPQUERYEXECUTIONREQUEST_H
#define QTAWS_STOPQUERYEXECUTIONREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class StopQueryExecutionRequestPrivate;

class QTAWSATHENA_EXPORT StopQueryExecutionRequest : public AthenaRequest {

public:
    StopQueryExecutionRequest(const StopQueryExecutionRequest &other);
    StopQueryExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopQueryExecutionRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
