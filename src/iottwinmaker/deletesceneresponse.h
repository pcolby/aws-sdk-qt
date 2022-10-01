// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCENERESPONSE_H
#define QTAWS_DELETESCENERESPONSE_H

#include "iottwinmakerresponse.h"
#include "deletescenerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteSceneResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT DeleteSceneResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    DeleteSceneResponse(const DeleteSceneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSceneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSceneResponse)
    Q_DISABLE_COPY(DeleteSceneResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
