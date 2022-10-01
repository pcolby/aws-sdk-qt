// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORFILTERRULEREQUEST_H
#define QTAWS_DELETETRAFFICMIRRORFILTERRULEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorFilterRuleRequestPrivate;

class QTAWSEC2_EXPORT DeleteTrafficMirrorFilterRuleRequest : public Ec2Request {

public:
    DeleteTrafficMirrorFilterRuleRequest(const DeleteTrafficMirrorFilterRuleRequest &other);
    DeleteTrafficMirrorFilterRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficMirrorFilterRuleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
