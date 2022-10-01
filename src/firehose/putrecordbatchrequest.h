// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDBATCHREQUEST_H
#define QTAWS_PUTRECORDBATCHREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class PutRecordBatchRequestPrivate;

class QTAWSFIREHOSE_EXPORT PutRecordBatchRequest : public FirehoseRequest {

public:
    PutRecordBatchRequest(const PutRecordBatchRequest &other);
    PutRecordBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecordBatchRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
