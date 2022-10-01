// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHILDRENREQUEST_H
#define QTAWS_LISTCHILDRENREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListChildrenRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListChildrenRequest : public OrganizationsRequest {

public:
    ListChildrenRequest(const ListChildrenRequest &other);
    ListChildrenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChildrenRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
