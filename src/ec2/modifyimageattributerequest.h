// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIMAGEATTRIBUTEREQUEST_H
#define QTAWS_MODIFYIMAGEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyImageAttributeRequestPrivate;

class QTAWSEC2_EXPORT ModifyImageAttributeRequest : public Ec2Request {

public:
    ModifyImageAttributeRequest(const ModifyImageAttributeRequest &other);
    ModifyImageAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
