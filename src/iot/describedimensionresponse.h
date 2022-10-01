// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIMENSIONRESPONSE_H
#define QTAWS_DESCRIBEDIMENSIONRESPONSE_H

#include "iotresponse.h"
#include "describedimensionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDimensionResponsePrivate;

class QTAWSIOT_EXPORT DescribeDimensionResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeDimensionResponse(const DescribeDimensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDimensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDimensionResponse)
    Q_DISABLE_COPY(DescribeDimensionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
