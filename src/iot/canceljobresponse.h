// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBRESPONSE_H
#define QTAWS_CANCELJOBRESPONSE_H

#include "iotresponse.h"
#include "canceljobrequest.h"

namespace QtAws {
namespace IoT {

class CancelJobResponsePrivate;

class QTAWSIOT_EXPORT CancelJobResponse : public IoTResponse {
    Q_OBJECT

public:
    CancelJobResponse(const CancelJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJobResponse)
    Q_DISABLE_COPY(CancelJobResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
