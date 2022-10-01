// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBJECTSREQUEST_H
#define QTAWS_LISTSUBJECTSREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListSubjectsRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT ListSubjectsRequest : public RolesAnywhereRequest {

public:
    ListSubjectsRequest(const ListSubjectsRequest &other);
    ListSubjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubjectsRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
