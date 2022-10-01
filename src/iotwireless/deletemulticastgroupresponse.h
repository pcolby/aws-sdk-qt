// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTICASTGROUPRESPONSE_H
#define QTAWS_DELETEMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletemulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteMulticastGroupResponse(const DeleteMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMulticastGroupResponse)
    Q_DISABLE_COPY(DeleteMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
