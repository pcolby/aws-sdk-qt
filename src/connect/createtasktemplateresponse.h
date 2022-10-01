// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKTEMPLATERESPONSE_H
#define QTAWS_CREATETASKTEMPLATERESPONSE_H

#include "connectresponse.h"
#include "createtasktemplaterequest.h"

namespace QtAws {
namespace Connect {

class CreateTaskTemplateResponsePrivate;

class QTAWSCONNECT_EXPORT CreateTaskTemplateResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateTaskTemplateResponse(const CreateTaskTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTaskTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTaskTemplateResponse)
    Q_DISABLE_COPY(CreateTaskTemplateResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
