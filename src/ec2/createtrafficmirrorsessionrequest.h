// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORSESSIONREQUEST_H
#define QTAWS_CREATETRAFFICMIRRORSESSIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorSessionRequestPrivate;

class QTAWSEC2_EXPORT CreateTrafficMirrorSessionRequest : public Ec2Request {

public:
    CreateTrafficMirrorSessionRequest(const CreateTrafficMirrorSessionRequest &other);
    CreateTrafficMirrorSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficMirrorSessionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
