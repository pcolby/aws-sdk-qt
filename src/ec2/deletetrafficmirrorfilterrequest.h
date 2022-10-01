// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORFILTERREQUEST_H
#define QTAWS_DELETETRAFFICMIRRORFILTERREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorFilterRequestPrivate;

class QTAWSEC2_EXPORT DeleteTrafficMirrorFilterRequest : public Ec2Request {

public:
    DeleteTrafficMirrorFilterRequest(const DeleteTrafficMirrorFilterRequest &other);
    DeleteTrafficMirrorFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficMirrorFilterRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
