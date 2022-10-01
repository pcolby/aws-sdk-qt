// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRLREQUEST_H
#define QTAWS_GETCRLREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetCrlRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT GetCrlRequest : public RolesAnywhereRequest {

public:
    GetCrlRequest(const GetCrlRequest &other);
    GetCrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
