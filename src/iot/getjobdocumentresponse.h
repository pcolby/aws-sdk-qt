// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBDOCUMENTRESPONSE_H
#define QTAWS_GETJOBDOCUMENTRESPONSE_H

#include "iotresponse.h"
#include "getjobdocumentrequest.h"

namespace QtAws {
namespace IoT {

class GetJobDocumentResponsePrivate;

class QTAWSIOT_EXPORT GetJobDocumentResponse : public IoTResponse {
    Q_OBJECT

public:
    GetJobDocumentResponse(const GetJobDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobDocumentResponse)
    Q_DISABLE_COPY(GetJobDocumentResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
