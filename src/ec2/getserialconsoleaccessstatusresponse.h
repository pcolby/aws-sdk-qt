// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERIALCONSOLEACCESSSTATUSRESPONSE_H
#define QTAWS_GETSERIALCONSOLEACCESSSTATUSRESPONSE_H

#include "ec2response.h"
#include "getserialconsoleaccessstatusrequest.h"

namespace QtAws {
namespace Ec2 {

class GetSerialConsoleAccessStatusResponsePrivate;

class QTAWSEC2_EXPORT GetSerialConsoleAccessStatusResponse : public Ec2Response {
    Q_OBJECT

public:
    GetSerialConsoleAccessStatusResponse(const GetSerialConsoleAccessStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSerialConsoleAccessStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSerialConsoleAccessStatusResponse)
    Q_DISABLE_COPY(GetSerialConsoleAccessStatusResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
