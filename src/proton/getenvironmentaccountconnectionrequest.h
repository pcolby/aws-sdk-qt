// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTACCOUNTCONNECTIONREQUEST_H
#define QTAWS_GETENVIRONMENTACCOUNTCONNECTIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentAccountConnectionRequestPrivate;

class QTAWSPROTON_EXPORT GetEnvironmentAccountConnectionRequest : public ProtonRequest {

public:
    GetEnvironmentAccountConnectionRequest(const GetEnvironmentAccountConnectionRequest &other);
    GetEnvironmentAccountConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
