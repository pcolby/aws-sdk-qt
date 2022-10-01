// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTTYPERESPONSE_H
#define QTAWS_UPDATECOMPONENTTYPERESPONSE_H

#include "iottwinmakerresponse.h"
#include "updatecomponenttyperequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateComponentTypeResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT UpdateComponentTypeResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    UpdateComponentTypeResponse(const UpdateComponentTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateComponentTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComponentTypeResponse)
    Q_DISABLE_COPY(UpdateComponentTypeResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
