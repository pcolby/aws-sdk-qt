// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKTEMPLATERESPONSE_H
#define QTAWS_DELETETASKTEMPLATERESPONSE_H

#include "connectresponse.h"
#include "deletetasktemplaterequest.h"

namespace QtAws {
namespace Connect {

class DeleteTaskTemplateResponsePrivate;

class QTAWSCONNECT_EXPORT DeleteTaskTemplateResponse : public ConnectResponse {
    Q_OBJECT

public:
    DeleteTaskTemplateResponse(const DeleteTaskTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTaskTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTaskTemplateResponse)
    Q_DISABLE_COPY(DeleteTaskTemplateResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
