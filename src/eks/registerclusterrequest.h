// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCLUSTERREQUEST_H
#define QTAWS_REGISTERCLUSTERREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class RegisterClusterRequestPrivate;

class QTAWSEKS_EXPORT RegisterClusterRequest : public EksRequest {

public:
    RegisterClusterRequest(const RegisterClusterRequest &other);
    RegisterClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterClusterRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
