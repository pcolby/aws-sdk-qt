// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEMETADATAOPTIONSREQUEST_H
#define QTAWS_MODIFYINSTANCEMETADATAOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceMetadataOptionsRequestPrivate;

class QTAWSEC2_EXPORT ModifyInstanceMetadataOptionsRequest : public Ec2Request {

public:
    ModifyInstanceMetadataOptionsRequest(const ModifyInstanceMetadataOptionsRequest &other);
    ModifyInstanceMetadataOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceMetadataOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
