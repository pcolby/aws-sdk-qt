// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMRESPONSE_H
#define QTAWS_DESCRIBESTREAMRESPONSE_H

#include "kinesisresponse.h"
#include "describestreamrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamResponsePrivate;

class QTAWSKINESIS_EXPORT DescribeStreamResponse : public KinesisResponse {
    Q_OBJECT

public:
    DescribeStreamResponse(const DescribeStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamResponse)
    Q_DISABLE_COPY(DescribeStreamResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
