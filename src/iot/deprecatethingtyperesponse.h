// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATETHINGTYPERESPONSE_H
#define QTAWS_DEPRECATETHINGTYPERESPONSE_H

#include "iotresponse.h"
#include "deprecatethingtyperequest.h"

namespace QtAws {
namespace IoT {

class DeprecateThingTypeResponsePrivate;

class QTAWSIOT_EXPORT DeprecateThingTypeResponse : public IoTResponse {
    Q_OBJECT

public:
    DeprecateThingTypeResponse(const DeprecateThingTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprecateThingTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateThingTypeResponse)
    Q_DISABLE_COPY(DeprecateThingTypeResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
