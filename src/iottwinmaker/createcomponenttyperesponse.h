// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTTYPERESPONSE_H
#define QTAWS_CREATECOMPONENTTYPERESPONSE_H

#include "iottwinmakerresponse.h"
#include "createcomponenttyperequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateComponentTypeResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT CreateComponentTypeResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    CreateComponentTypeResponse(const CreateComponentTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateComponentTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateComponentTypeResponse)
    Q_DISABLE_COPY(CreateComponentTypeResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
