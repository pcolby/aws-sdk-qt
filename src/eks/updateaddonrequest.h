// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADDONREQUEST_H
#define QTAWS_UPDATEADDONREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class UpdateAddonRequestPrivate;

class QTAWSEKS_EXPORT UpdateAddonRequest : public EksRequest {

public:
    UpdateAddonRequest(const UpdateAddonRequest &other);
    UpdateAddonRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAddonRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
