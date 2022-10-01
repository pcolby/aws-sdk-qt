// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTGOINGCERTIFICATESRESPONSE_H
#define QTAWS_LISTOUTGOINGCERTIFICATESRESPONSE_H

#include "iotresponse.h"
#include "listoutgoingcertificatesrequest.h"

namespace QtAws {
namespace IoT {

class ListOutgoingCertificatesResponsePrivate;

class QTAWSIOT_EXPORT ListOutgoingCertificatesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListOutgoingCertificatesResponse(const ListOutgoingCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOutgoingCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOutgoingCertificatesResponse)
    Q_DISABLE_COPY(ListOutgoingCertificatesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
