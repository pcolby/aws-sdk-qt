// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOTSREQUEST_H
#define QTAWS_LISTROOTSREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListRootsRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListRootsRequest : public OrganizationsRequest {

public:
    ListRootsRequest(const ListRootsRequest &other);
    ListRootsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRootsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
