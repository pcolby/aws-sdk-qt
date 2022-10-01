// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEATTRIBUTEREQUEST_H
#define QTAWS_MODIFYINSTANCEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceAttributeRequestPrivate;

class QTAWSEC2_EXPORT ModifyInstanceAttributeRequest : public Ec2Request {

public:
    ModifyInstanceAttributeRequest(const ModifyInstanceAttributeRequest &other);
    ModifyInstanceAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
