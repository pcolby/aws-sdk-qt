// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCATALOGIMPORTSTATUSREQUEST_P_H
#define QTAWS_GETCATALOGIMPORTSTATUSREQUEST_P_H

#include "gluerequest_p.h"
#include "getcatalogimportstatusrequest.h"

namespace QtAws {
namespace Glue {

class GetCatalogImportStatusRequest;

class GetCatalogImportStatusRequestPrivate : public GlueRequestPrivate {

public:
    GetCatalogImportStatusRequestPrivate(const GlueRequest::Action action,
                                   GetCatalogImportStatusRequest * const q);
    GetCatalogImportStatusRequestPrivate(const GetCatalogImportStatusRequestPrivate &other,
                                   GetCatalogImportStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCatalogImportStatusRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
