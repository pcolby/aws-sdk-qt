// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORFILTERREQUEST_H
#define QTAWS_CREATETRAFFICMIRRORFILTERREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorFilterRequestPrivate;

class QTAWSEC2_EXPORT CreateTrafficMirrorFilterRequest : public Ec2Request {

public:
    CreateTrafficMirrorFilterRequest(const CreateTrafficMirrorFilterRequest &other);
    CreateTrafficMirrorFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficMirrorFilterRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
