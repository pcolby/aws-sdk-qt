// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYCATALOGDATAREQUEST_P_H
#define QTAWS_PUTREPOSITORYCATALOGDATAREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "putrepositorycatalogdatarequest.h"

namespace QtAws {
namespace EcrPublic {

class PutRepositoryCatalogDataRequest;

class PutRepositoryCatalogDataRequestPrivate : public EcrPublicRequestPrivate {

public:
    PutRepositoryCatalogDataRequestPrivate(const EcrPublicRequest::Action action,
                                   PutRepositoryCatalogDataRequest * const q);
    PutRepositoryCatalogDataRequestPrivate(const PutRepositoryCatalogDataRequestPrivate &other,
                                   PutRepositoryCatalogDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRepositoryCatalogDataRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
