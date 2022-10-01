// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTASKTEMPLATERESPONSE_H
#define QTAWS_GETTASKTEMPLATERESPONSE_H

#include "connectresponse.h"
#include "gettasktemplaterequest.h"

namespace QtAws {
namespace Connect {

class GetTaskTemplateResponsePrivate;

class QTAWSCONNECT_EXPORT GetTaskTemplateResponse : public ConnectResponse {
    Q_OBJECT

public:
    GetTaskTemplateResponse(const GetTaskTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTaskTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTaskTemplateResponse)
    Q_DISABLE_COPY(GetTaskTemplateResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
