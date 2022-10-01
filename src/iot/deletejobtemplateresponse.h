// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTEMPLATERESPONSE_H
#define QTAWS_DELETEJOBTEMPLATERESPONSE_H

#include "iotresponse.h"
#include "deletejobtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DeleteJobTemplateResponsePrivate;

class QTAWSIOT_EXPORT DeleteJobTemplateResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteJobTemplateResponse(const DeleteJobTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteJobTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobTemplateResponse)
    Q_DISABLE_COPY(DeleteJobTemplateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
