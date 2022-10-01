// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENTITYRESPONSE_H
#define QTAWS_UPDATEENTITYRESPONSE_H

#include "iottwinmakerresponse.h"
#include "updateentityrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateEntityResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT UpdateEntityResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    UpdateEntityResponse(const UpdateEntityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEntityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEntityResponse)
    Q_DISABLE_COPY(UpdateEntityResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
