// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTENVIRONMENTACCOUNTCONNECTIONREQUEST_H
#define QTAWS_REJECTENVIRONMENTACCOUNTCONNECTIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class RejectEnvironmentAccountConnectionRequestPrivate;

class QTAWSPROTON_EXPORT RejectEnvironmentAccountConnectionRequest : public ProtonRequest {

public:
    RejectEnvironmentAccountConnectionRequest(const RejectEnvironmentAccountConnectionRequest &other);
    RejectEnvironmentAccountConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
