// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMCONSUMERREQUEST_H
#define QTAWS_DESCRIBESTREAMCONSUMERREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamConsumerRequestPrivate;

class QTAWSKINESIS_EXPORT DescribeStreamConsumerRequest : public KinesisRequest {

public:
    DescribeStreamConsumerRequest(const DescribeStreamConsumerRequest &other);
    DescribeStreamConsumerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamConsumerRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
