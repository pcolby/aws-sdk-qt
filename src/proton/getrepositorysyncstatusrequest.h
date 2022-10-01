// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYSYNCSTATUSREQUEST_H
#define QTAWS_GETREPOSITORYSYNCSTATUSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetRepositorySyncStatusRequestPrivate;

class QTAWSPROTON_EXPORT GetRepositorySyncStatusRequest : public ProtonRequest {

public:
    GetRepositorySyncStatusRequest(const GetRepositorySyncStatusRequest &other);
    GetRepositorySyncStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositorySyncStatusRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
