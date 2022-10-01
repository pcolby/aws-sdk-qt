// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESERIALCONSOLEACCESSREQUEST_H
#define QTAWS_DISABLESERIALCONSOLEACCESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableSerialConsoleAccessRequestPrivate;

class QTAWSEC2_EXPORT DisableSerialConsoleAccessRequest : public Ec2Request {

public:
    DisableSerialConsoleAccessRequest(const DisableSerialConsoleAccessRequest &other);
    DisableSerialConsoleAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSerialConsoleAccessRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
