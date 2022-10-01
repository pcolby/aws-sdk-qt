// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRATIONCODERESPONSE_H
#define QTAWS_DELETEREGISTRATIONCODERESPONSE_H

#include "iotresponse.h"
#include "deleteregistrationcoderequest.h"

namespace QtAws {
namespace IoT {

class DeleteRegistrationCodeResponsePrivate;

class QTAWSIOT_EXPORT DeleteRegistrationCodeResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteRegistrationCodeResponse(const DeleteRegistrationCodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRegistrationCodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegistrationCodeResponse)
    Q_DISABLE_COPY(DeleteRegistrationCodeResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
