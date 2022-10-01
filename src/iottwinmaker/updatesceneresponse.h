// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCENERESPONSE_H
#define QTAWS_UPDATESCENERESPONSE_H

#include "iottwinmakerresponse.h"
#include "updatescenerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateSceneResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT UpdateSceneResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    UpdateSceneResponse(const UpdateSceneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSceneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSceneResponse)
    Q_DISABLE_COPY(UpdateSceneResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
