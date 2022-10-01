// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORLDTEMPLATERESPONSE_H
#define QTAWS_UPDATEWORLDTEMPLATERESPONSE_H

#include "robomakerresponse.h"
#include "updateworldtemplaterequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateWorldTemplateResponsePrivate;

class QTAWSROBOMAKER_EXPORT UpdateWorldTemplateResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    UpdateWorldTemplateResponse(const UpdateWorldTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorldTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorldTemplateResponse)
    Q_DISABLE_COPY(UpdateWorldTemplateResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
