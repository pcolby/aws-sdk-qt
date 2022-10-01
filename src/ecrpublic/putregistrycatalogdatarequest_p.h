// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYCATALOGDATAREQUEST_P_H
#define QTAWS_PUTREGISTRYCATALOGDATAREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "putregistrycatalogdatarequest.h"

namespace QtAws {
namespace EcrPublic {

class PutRegistryCatalogDataRequest;

class PutRegistryCatalogDataRequestPrivate : public EcrPublicRequestPrivate {

public:
    PutRegistryCatalogDataRequestPrivate(const EcrPublicRequest::Action action,
                                   PutRegistryCatalogDataRequest * const q);
    PutRegistryCatalogDataRequestPrivate(const PutRegistryCatalogDataRequestPrivate &other,
                                   PutRegistryCatalogDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRegistryCatalogDataRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
