// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORSESSIONREQUEST_H
#define QTAWS_MODIFYTRAFFICMIRRORSESSIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorSessionRequestPrivate;

class QTAWSEC2_EXPORT ModifyTrafficMirrorSessionRequest : public Ec2Request {

public:
    ModifyTrafficMirrorSessionRequest(const ModifyTrafficMirrorSessionRequest &other);
    ModifyTrafficMirrorSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTrafficMirrorSessionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
