// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTTYPERESPONSE_H
#define QTAWS_GETCOMPONENTTYPERESPONSE_H

#include "iottwinmakerresponse.h"
#include "getcomponenttyperequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetComponentTypeResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT GetComponentTypeResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    GetComponentTypeResponse(const GetComponentTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComponentTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComponentTypeResponse)
    Q_DISABLE_COPY(GetComponentTypeResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
