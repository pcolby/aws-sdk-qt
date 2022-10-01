// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYCATALOGDATAREQUEST_P_H
#define QTAWS_GETREPOSITORYCATALOGDATAREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "getrepositorycatalogdatarequest.h"

namespace QtAws {
namespace EcrPublic {

class GetRepositoryCatalogDataRequest;

class GetRepositoryCatalogDataRequestPrivate : public EcrPublicRequestPrivate {

public:
    GetRepositoryCatalogDataRequestPrivate(const EcrPublicRequest::Action action,
                                   GetRepositoryCatalogDataRequest * const q);
    GetRepositoryCatalogDataRequestPrivate(const GetRepositoryCatalogDataRequestPrivate &other,
                                   GetRepositoryCatalogDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRepositoryCatalogDataRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
