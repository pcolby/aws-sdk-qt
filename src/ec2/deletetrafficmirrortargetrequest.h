// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORTARGETREQUEST_H
#define QTAWS_DELETETRAFFICMIRRORTARGETREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorTargetRequestPrivate;

class QTAWSEC2_EXPORT DeleteTrafficMirrorTargetRequest : public Ec2Request {

public:
    DeleteTrafficMirrorTargetRequest(const DeleteTrafficMirrorTargetRequest &other);
    DeleteTrafficMirrorTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficMirrorTargetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
