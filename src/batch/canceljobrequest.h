// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBREQUEST_H
#define QTAWS_CANCELJOBREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class CancelJobRequestPrivate;

class QTAWSBATCH_EXPORT CancelJobRequest : public BatchRequest {

public:
    CancelJobRequest(const CancelJobRequest &other);
    CancelJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJobRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
