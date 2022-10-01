// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERIALCONSOLEACCESSSTATUSREQUEST_H
#define QTAWS_GETSERIALCONSOLEACCESSSTATUSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetSerialConsoleAccessStatusRequestPrivate;

class QTAWSEC2_EXPORT GetSerialConsoleAccessStatusRequest : public Ec2Request {

public:
    GetSerialConsoleAccessStatusRequest(const GetSerialConsoleAccessStatusRequest &other);
    GetSerialConsoleAccessStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSerialConsoleAccessStatusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
