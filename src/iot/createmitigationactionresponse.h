// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMITIGATIONACTIONRESPONSE_H
#define QTAWS_CREATEMITIGATIONACTIONRESPONSE_H

#include "iotresponse.h"
#include "createmitigationactionrequest.h"

namespace QtAws {
namespace IoT {

class CreateMitigationActionResponsePrivate;

class QTAWSIOT_EXPORT CreateMitigationActionResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateMitigationActionResponse(const CreateMitigationActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMitigationActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMitigationActionResponse)
    Q_DISABLE_COPY(CreateMitigationActionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
