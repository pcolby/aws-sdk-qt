// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDADMINISTRATORSREQUEST_H
#define QTAWS_LISTDELEGATEDADMINISTRATORSREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListDelegatedAdministratorsRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListDelegatedAdministratorsRequest : public OrganizationsRequest {

public:
    ListDelegatedAdministratorsRequest(const ListDelegatedAdministratorsRequest &other);
    ListDelegatedAdministratorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDelegatedAdministratorsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
