// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDONREQUEST_H
#define QTAWS_CREATEADDONREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class CreateAddonRequestPrivate;

class QTAWSEKS_EXPORT CreateAddonRequest : public EksRequest {

public:
    CreateAddonRequest(const CreateAddonRequest &other);
    CreateAddonRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAddonRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
