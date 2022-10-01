// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDREQUEST_H
#define QTAWS_PUTRECORDREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class PutRecordRequestPrivate;

class QTAWSFIREHOSE_EXPORT PutRecordRequest : public FirehoseRequest {

public:
    PutRecordRequest(const PutRecordRequest &other);
    PutRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecordRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
