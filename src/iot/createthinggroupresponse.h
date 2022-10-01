// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGGROUPRESPONSE_H
#define QTAWS_CREATETHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "createthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class CreateThingGroupResponsePrivate;

class QTAWSIOT_EXPORT CreateThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateThingGroupResponse(const CreateThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThingGroupResponse)
    Q_DISABLE_COPY(CreateThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
