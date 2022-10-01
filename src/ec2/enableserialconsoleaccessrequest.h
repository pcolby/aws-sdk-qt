// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESERIALCONSOLEACCESSREQUEST_H
#define QTAWS_ENABLESERIALCONSOLEACCESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableSerialConsoleAccessRequestPrivate;

class QTAWSEC2_EXPORT EnableSerialConsoleAccessRequest : public Ec2Request {

public:
    EnableSerialConsoleAccessRequest(const EnableSerialConsoleAccessRequest &other);
    EnableSerialConsoleAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSerialConsoleAccessRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
