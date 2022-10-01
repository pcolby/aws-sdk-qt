// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCENERESPONSE_H
#define QTAWS_GETSCENERESPONSE_H

#include "iottwinmakerresponse.h"
#include "getscenerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetSceneResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT GetSceneResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    GetSceneResponse(const GetSceneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSceneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSceneResponse)
    Q_DISABLE_COPY(GetSceneResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
