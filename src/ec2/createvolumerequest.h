// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMEREQUEST_H
#define QTAWS_CREATEVOLUMEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVolumeRequestPrivate;

class QTAWSEC2_EXPORT CreateVolumeRequest : public Ec2Request {

public:
    CreateVolumeRequest(const CreateVolumeRequest &other);
    CreateVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
