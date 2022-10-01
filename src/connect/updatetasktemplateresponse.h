// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKTEMPLATERESPONSE_H
#define QTAWS_UPDATETASKTEMPLATERESPONSE_H

#include "connectresponse.h"
#include "updatetasktemplaterequest.h"

namespace QtAws {
namespace Connect {

class UpdateTaskTemplateResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateTaskTemplateResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateTaskTemplateResponse(const UpdateTaskTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTaskTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTaskTemplateResponse)
    Q_DISABLE_COPY(UpdateTaskTemplateResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
