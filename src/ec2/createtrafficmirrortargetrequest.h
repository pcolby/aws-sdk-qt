// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORTARGETREQUEST_H
#define QTAWS_CREATETRAFFICMIRRORTARGETREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorTargetRequestPrivate;

class QTAWSEC2_EXPORT CreateTrafficMirrorTargetRequest : public Ec2Request {

public:
    CreateTrafficMirrorTargetRequest(const CreateTrafficMirrorTargetRequest &other);
    CreateTrafficMirrorTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficMirrorTargetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
