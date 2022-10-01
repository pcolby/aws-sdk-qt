// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESBYCARESPONSE_H
#define QTAWS_LISTCERTIFICATESBYCARESPONSE_H

#include "iotresponse.h"
#include "listcertificatesbycarequest.h"

namespace QtAws {
namespace IoT {

class ListCertificatesByCAResponsePrivate;

class QTAWSIOT_EXPORT ListCertificatesByCAResponse : public IoTResponse {
    Q_OBJECT

public:
    ListCertificatesByCAResponse(const ListCertificatesByCARequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCertificatesByCARequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCertificatesByCAResponse)
    Q_DISABLE_COPY(ListCertificatesByCAResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
