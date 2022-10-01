// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGTYPESRESPONSE_H
#define QTAWS_LISTTHINGTYPESRESPONSE_H

#include "iotresponse.h"
#include "listthingtypesrequest.h"

namespace QtAws {
namespace IoT {

class ListThingTypesResponsePrivate;

class QTAWSIOT_EXPORT ListThingTypesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListThingTypesResponse(const ListThingTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThingTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingTypesResponse)
    Q_DISABLE_COPY(ListThingTypesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
