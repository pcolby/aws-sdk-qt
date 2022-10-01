// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORSESSIONREQUEST_H
#define QTAWS_DELETETRAFFICMIRRORSESSIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorSessionRequestPrivate;

class QTAWSEC2_EXPORT DeleteTrafficMirrorSessionRequest : public Ec2Request {

public:
    DeleteTrafficMirrorSessionRequest(const DeleteTrafficMirrorSessionRequest &other);
    DeleteTrafficMirrorSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficMirrorSessionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
