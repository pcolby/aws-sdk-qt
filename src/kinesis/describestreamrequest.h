// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMREQUEST_H
#define QTAWS_DESCRIBESTREAMREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamRequestPrivate;

class QTAWSKINESIS_EXPORT DescribeStreamRequest : public KinesisRequest {

public:
    DescribeStreamRequest(const DescribeStreamRequest &other);
    DescribeStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
