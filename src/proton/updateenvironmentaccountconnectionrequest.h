// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTACCOUNTCONNECTIONREQUEST_H
#define QTAWS_UPDATEENVIRONMENTACCOUNTCONNECTIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentAccountConnectionRequestPrivate;

class QTAWSPROTON_EXPORT UpdateEnvironmentAccountConnectionRequest : public ProtonRequest {

public:
    UpdateEnvironmentAccountConnectionRequest(const UpdateEnvironmentAccountConnectionRequest &other);
    UpdateEnvironmentAccountConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
