// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACERTIFICATERESPONSE_H
#define QTAWS_DESCRIBECACERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "describecacertificaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeCACertificateResponsePrivate;

class QTAWSIOT_EXPORT DescribeCACertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeCACertificateResponse(const DescribeCACertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCACertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCACertificateResponse)
    Q_DISABLE_COPY(DescribeCACertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
