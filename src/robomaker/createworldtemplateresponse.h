// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDTEMPLATERESPONSE_H
#define QTAWS_CREATEWORLDTEMPLATERESPONSE_H

#include "robomakerresponse.h"
#include "createworldtemplaterequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldTemplateResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateWorldTemplateResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateWorldTemplateResponse(const CreateWorldTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorldTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorldTemplateResponse)
    Q_DISABLE_COPY(CreateWorldTemplateResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
