// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTHINGTOTHINGGROUPRESPONSE_H
#define QTAWS_ADDTHINGTOTHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "addthingtothinggrouprequest.h"

namespace QtAws {
namespace IoT {

class AddThingToThingGroupResponsePrivate;

class QTAWSIOT_EXPORT AddThingToThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    AddThingToThingGroupResponse(const AddThingToThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddThingToThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddThingToThingGroupResponse)
    Q_DISABLE_COPY(AddThingToThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
