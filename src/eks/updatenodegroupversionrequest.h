// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEGROUPVERSIONREQUEST_H
#define QTAWS_UPDATENODEGROUPVERSIONREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class UpdateNodegroupVersionRequestPrivate;

class QTAWSEKS_EXPORT UpdateNodegroupVersionRequest : public EksRequest {

public:
    UpdateNodegroupVersionRequest(const UpdateNodegroupVersionRequest &other);
    UpdateNodegroupVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNodegroupVersionRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
