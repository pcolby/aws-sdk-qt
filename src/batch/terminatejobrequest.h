// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEJOBREQUEST_H
#define QTAWS_TERMINATEJOBREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class TerminateJobRequestPrivate;

class QTAWSBATCH_EXPORT TerminateJobRequest : public BatchRequest {

public:
    TerminateJobRequest(const TerminateJobRequest &other);
    TerminateJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateJobRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
