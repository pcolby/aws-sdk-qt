// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDSREQUEST_H
#define QTAWS_PUTRECORDSREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class PutRecordsRequestPrivate;

class QTAWSKINESIS_EXPORT PutRecordsRequest : public KinesisRequest {

public:
    PutRecordsRequest(const PutRecordsRequest &other);
    PutRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecordsRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
