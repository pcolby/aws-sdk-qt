// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCACERTIFICATESRESPONSE_H
#define QTAWS_LISTCACERTIFICATESRESPONSE_H

#include "iotresponse.h"
#include "listcacertificatesrequest.h"

namespace QtAws {
namespace IoT {

class ListCACertificatesResponsePrivate;

class QTAWSIOT_EXPORT ListCACertificatesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListCACertificatesResponse(const ListCACertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCACertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCACertificatesResponse)
    Q_DISABLE_COPY(ListCACertificatesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
