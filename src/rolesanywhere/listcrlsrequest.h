// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRLSREQUEST_H
#define QTAWS_LISTCRLSREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListCrlsRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT ListCrlsRequest : public RolesAnywhereRequest {

public:
    ListCrlsRequest(const ListCrlsRequest &other);
    ListCrlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCrlsRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
