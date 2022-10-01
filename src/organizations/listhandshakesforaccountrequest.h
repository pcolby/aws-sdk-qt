// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHANDSHAKESFORACCOUNTREQUEST_H
#define QTAWS_LISTHANDSHAKESFORACCOUNTREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListHandshakesForAccountRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListHandshakesForAccountRequest : public OrganizationsRequest {

public:
    ListHandshakesForAccountRequest(const ListHandshakesForAccountRequest &other);
    ListHandshakesForAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHandshakesForAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
