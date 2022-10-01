// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARENTSREQUEST_H
#define QTAWS_LISTPARENTSREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListParentsRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListParentsRequest : public OrganizationsRequest {

public:
    ListParentsRequest(const ListParentsRequest &other);
    ListParentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListParentsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
