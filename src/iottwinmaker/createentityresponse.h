// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITYRESPONSE_H
#define QTAWS_CREATEENTITYRESPONSE_H

#include "iottwinmakerresponse.h"
#include "createentityrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateEntityResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT CreateEntityResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    CreateEntityResponse(const CreateEntityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEntityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEntityResponse)
    Q_DISABLE_COPY(CreateEntityResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
