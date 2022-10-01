// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGTYPERESPONSE_H
#define QTAWS_CREATETHINGTYPERESPONSE_H

#include "iotresponse.h"
#include "createthingtyperequest.h"

namespace QtAws {
namespace IoT {

class CreateThingTypeResponsePrivate;

class QTAWSIOT_EXPORT CreateThingTypeResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateThingTypeResponse(const CreateThingTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateThingTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThingTypeResponse)
    Q_DISABLE_COPY(CreateThingTypeResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
