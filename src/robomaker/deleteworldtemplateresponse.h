// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORLDTEMPLATERESPONSE_H
#define QTAWS_DELETEWORLDTEMPLATERESPONSE_H

#include "robomakerresponse.h"
#include "deleteworldtemplaterequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteWorldTemplateResponsePrivate;

class QTAWSROBOMAKER_EXPORT DeleteWorldTemplateResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DeleteWorldTemplateResponse(const DeleteWorldTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorldTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorldTemplateResponse)
    Q_DISABLE_COPY(DeleteWorldTemplateResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
