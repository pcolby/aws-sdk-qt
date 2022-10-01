// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCENERESPONSE_H
#define QTAWS_CREATESCENERESPONSE_H

#include "iottwinmakerresponse.h"
#include "createscenerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateSceneResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT CreateSceneResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    CreateSceneResponse(const CreateSceneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSceneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSceneResponse)
    Q_DISABLE_COPY(CreateSceneResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
