// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBJECTREQUEST_H
#define QTAWS_GETSUBJECTREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetSubjectRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT GetSubjectRequest : public RolesAnywhereRequest {

public:
    GetSubjectRequest(const GetSubjectRequest &other);
    GetSubjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubjectRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
