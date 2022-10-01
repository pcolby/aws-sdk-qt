// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGDELIVERYSTREAMREQUEST_H
#define QTAWS_UNTAGDELIVERYSTREAMREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class UntagDeliveryStreamRequestPrivate;

class QTAWSFIREHOSE_EXPORT UntagDeliveryStreamRequest : public FirehoseRequest {

public:
    UntagDeliveryStreamRequest(const UntagDeliveryStreamRequest &other);
    UntagDeliveryStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
