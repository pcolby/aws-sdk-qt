// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYFPGAIMAGEATTRIBUTEREQUEST_H
#define QTAWS_MODIFYFPGAIMAGEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyFpgaImageAttributeRequestPrivate;

class QTAWSEC2_EXPORT ModifyFpgaImageAttributeRequest : public Ec2Request {

public:
    ModifyFpgaImageAttributeRequest(const ModifyFpgaImageAttributeRequest &other);
    ModifyFpgaImageAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyFpgaImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
