// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORFILTERRULEREQUEST_H
#define QTAWS_MODIFYTRAFFICMIRRORFILTERRULEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorFilterRuleRequestPrivate;

class QTAWSEC2_EXPORT ModifyTrafficMirrorFilterRuleRequest : public Ec2Request {

public:
    ModifyTrafficMirrorFilterRuleRequest(const ModifyTrafficMirrorFilterRuleRequest &other);
    ModifyTrafficMirrorFilterRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTrafficMirrorFilterRuleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
