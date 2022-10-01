// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHJOBEXECUTIONREQUEST_H
#define QTAWS_CANCELBATCHJOBEXECUTIONREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class CancelBatchJobExecutionRequestPrivate;

class QTAWSM2_EXPORT CancelBatchJobExecutionRequest : public M2Request {

public:
    CancelBatchJobExecutionRequest(const CancelBatchJobExecutionRequest &other);
    CancelBatchJobExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelBatchJobExecutionRequest)

};

} // namespace M2
} // namespace QtAws

#endif
