// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMCONSUMERRESPONSE_H
#define QTAWS_DESCRIBESTREAMCONSUMERRESPONSE_H

#include "kinesisresponse.h"
#include "describestreamconsumerrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamConsumerResponsePrivate;

class QTAWSKINESIS_EXPORT DescribeStreamConsumerResponse : public KinesisResponse {
    Q_OBJECT

public:
    DescribeStreamConsumerResponse(const DescribeStreamConsumerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStreamConsumerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamConsumerResponse)
    Q_DISABLE_COPY(DescribeStreamConsumerResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
