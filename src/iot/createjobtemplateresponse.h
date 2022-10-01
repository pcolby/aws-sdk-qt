// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBTEMPLATERESPONSE_H
#define QTAWS_CREATEJOBTEMPLATERESPONSE_H

#include "iotresponse.h"
#include "createjobtemplaterequest.h"

namespace QtAws {
namespace IoT {

class CreateJobTemplateResponsePrivate;

class QTAWSIOT_EXPORT CreateJobTemplateResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateJobTemplateResponse(const CreateJobTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateJobTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobTemplateResponse)
    Q_DISABLE_COPY(CreateJobTemplateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
