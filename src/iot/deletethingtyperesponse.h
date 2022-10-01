// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGTYPERESPONSE_H
#define QTAWS_DELETETHINGTYPERESPONSE_H

#include "iotresponse.h"
#include "deletethingtyperequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingTypeResponsePrivate;

class QTAWSIOT_EXPORT DeleteThingTypeResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteThingTypeResponse(const DeleteThingTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThingTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThingTypeResponse)
    Q_DISABLE_COPY(DeleteThingTypeResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
