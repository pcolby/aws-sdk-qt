// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESERIALCONSOLEACCESSRESPONSE_H
#define QTAWS_DISABLESERIALCONSOLEACCESSRESPONSE_H

#include "ec2response.h"
#include "disableserialconsoleaccessrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableSerialConsoleAccessResponsePrivate;

class QTAWSEC2_EXPORT DisableSerialConsoleAccessResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableSerialConsoleAccessResponse(const DisableSerialConsoleAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableSerialConsoleAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSerialConsoleAccessResponse)
    Q_DISABLE_COPY(DisableSerialConsoleAccessResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
