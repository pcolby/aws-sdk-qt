// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMSUMMARYREQUEST_H
#define QTAWS_DESCRIBESTREAMSUMMARYREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamSummaryRequestPrivate;

class QTAWSKINESIS_EXPORT DescribeStreamSummaryRequest : public KinesisRequest {

public:
    DescribeStreamSummaryRequest(const DescribeStreamSummaryRequest &other);
    DescribeStreamSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamSummaryRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
