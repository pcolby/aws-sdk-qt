// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHJOBEXECUTIONREQUEST_H
#define QTAWS_GETBATCHJOBEXECUTIONREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class GetBatchJobExecutionRequestPrivate;

class QTAWSM2_EXPORT GetBatchJobExecutionRequest : public M2Request {

public:
    GetBatchJobExecutionRequest(const GetBatchJobExecutionRequest &other);
    GetBatchJobExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBatchJobExecutionRequest)

};

} // namespace M2
} // namespace QtAws

#endif
