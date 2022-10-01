// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHANDSHAKESFORORGANIZATIONREQUEST_H
#define QTAWS_LISTHANDSHAKESFORORGANIZATIONREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListHandshakesForOrganizationRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListHandshakesForOrganizationRequest : public OrganizationsRequest {

public:
    ListHandshakesForOrganizationRequest(const ListHandshakesForOrganizationRequest &other);
    ListHandshakesForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHandshakesForOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
