// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVOLUMEATTRIBUTEREQUEST_H
#define QTAWS_MODIFYVOLUMEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVolumeAttributeRequestPrivate;

class QTAWSEC2_EXPORT ModifyVolumeAttributeRequest : public Ec2Request {

public:
    ModifyVolumeAttributeRequest(const ModifyVolumeAttributeRequest &other);
    ModifyVolumeAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVolumeAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
