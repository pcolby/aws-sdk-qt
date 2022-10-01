// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONREQUEST_H
#define QTAWS_GETPERMISSIONREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class GetPermissionRequestPrivate;

class QTAWSRAM_EXPORT GetPermissionRequest : public RamRequest {

public:
    GetPermissionRequest(const GetPermissionRequest &other);
    GetPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
