// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVOLUMEREQUEST_H
#define QTAWS_MODIFYVOLUMEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVolumeRequestPrivate;

class QTAWSEC2_EXPORT ModifyVolumeRequest : public Ec2Request {

public:
    ModifyVolumeRequest(const ModifyVolumeRequest &other);
    ModifyVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
