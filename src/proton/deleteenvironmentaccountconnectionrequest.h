// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTACCOUNTCONNECTIONREQUEST_H
#define QTAWS_DELETEENVIRONMENTACCOUNTCONNECTIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentAccountConnectionRequestPrivate;

class QTAWSPROTON_EXPORT DeleteEnvironmentAccountConnectionRequest : public ProtonRequest {

public:
    DeleteEnvironmentAccountConnectionRequest(const DeleteEnvironmentAccountConnectionRequest &other);
    DeleteEnvironmentAccountConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentAccountConnectionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
