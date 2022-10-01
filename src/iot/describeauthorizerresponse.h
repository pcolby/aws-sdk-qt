// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTHORIZERRESPONSE_H
#define QTAWS_DESCRIBEAUTHORIZERRESPONSE_H

#include "iotresponse.h"
#include "describeauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuthorizerResponsePrivate;

class QTAWSIOT_EXPORT DescribeAuthorizerResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeAuthorizerResponse(const DescribeAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAuthorizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuthorizerResponse)
    Q_DISABLE_COPY(DescribeAuthorizerResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
