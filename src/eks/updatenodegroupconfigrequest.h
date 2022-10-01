// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEGROUPCONFIGREQUEST_H
#define QTAWS_UPDATENODEGROUPCONFIGREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class UpdateNodegroupConfigRequestPrivate;

class QTAWSEKS_EXPORT UpdateNodegroupConfigRequest : public EksRequest {

public:
    UpdateNodegroupConfigRequest(const UpdateNodegroupConfigRequest &other);
    UpdateNodegroupConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNodegroupConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
