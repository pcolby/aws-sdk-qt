// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORFILTERRULEREQUEST_H
#define QTAWS_CREATETRAFFICMIRRORFILTERRULEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorFilterRuleRequestPrivate;

class QTAWSEC2_EXPORT CreateTrafficMirrorFilterRuleRequest : public Ec2Request {

public:
    CreateTrafficMirrorFilterRuleRequest(const CreateTrafficMirrorFilterRuleRequest &other);
    CreateTrafficMirrorFilterRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficMirrorFilterRuleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
