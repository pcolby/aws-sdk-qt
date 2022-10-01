// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITJOBREQUEST_H
#define QTAWS_SUBMITJOBREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class SubmitJobRequestPrivate;

class QTAWSBATCH_EXPORT SubmitJobRequest : public BatchRequest {

public:
    SubmitJobRequest(const SubmitJobRequest &other);
    SubmitJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitJobRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
