// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYSTREAMREQUEST_H
#define QTAWS_DESCRIBEDELIVERYSTREAMREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class DescribeDeliveryStreamRequestPrivate;

class QTAWSFIREHOSE_EXPORT DescribeDeliveryStreamRequest : public FirehoseRequest {

public:
    DescribeDeliveryStreamRequest(const DescribeDeliveryStreamRequest &other);
    DescribeDeliveryStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
