// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTACCOUNTCONNECTIONREQUEST_H
#define QTAWS_CREATEENVIRONMENTACCOUNTCONNECTIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentAccountConnectionRequestPrivate;

class QTAWSPROTON_EXPORT CreateEnvironmentAccountConnectionRequest : public ProtonRequest {

public:
    CreateEnvironmentAccountConnectionRequest(const CreateEnvironmentAccountConnectionRequest &other);
    CreateEnvironmentAccountConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
