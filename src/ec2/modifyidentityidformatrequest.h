// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIDENTITYIDFORMATREQUEST_H
#define QTAWS_MODIFYIDENTITYIDFORMATREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyIdentityIdFormatRequestPrivate;

class QTAWSEC2_EXPORT ModifyIdentityIdFormatRequest : public Ec2Request {

public:
    ModifyIdentityIdFormatRequest(const ModifyIdentityIdFormatRequest &other);
    ModifyIdentityIdFormatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIdentityIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
