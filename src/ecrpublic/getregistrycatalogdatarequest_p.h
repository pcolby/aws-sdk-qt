// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYCATALOGDATAREQUEST_P_H
#define QTAWS_GETREGISTRYCATALOGDATAREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "getregistrycatalogdatarequest.h"

namespace QtAws {
namespace EcrPublic {

class GetRegistryCatalogDataRequest;

class GetRegistryCatalogDataRequestPrivate : public EcrPublicRequestPrivate {

public:
    GetRegistryCatalogDataRequestPrivate(const EcrPublicRequest::Action action,
                                   GetRegistryCatalogDataRequest * const q);
    GetRegistryCatalogDataRequestPrivate(const GetRegistryCatalogDataRequestPrivate &other,
                                   GetRegistryCatalogDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegistryCatalogDataRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
