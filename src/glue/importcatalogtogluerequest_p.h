// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCATALOGTOGLUEREQUEST_P_H
#define QTAWS_IMPORTCATALOGTOGLUEREQUEST_P_H

#include "gluerequest_p.h"
#include "importcatalogtogluerequest.h"

namespace QtAws {
namespace Glue {

class ImportCatalogToGlueRequest;

class ImportCatalogToGlueRequestPrivate : public GlueRequestPrivate {

public:
    ImportCatalogToGlueRequestPrivate(const GlueRequest::Action action,
                                   ImportCatalogToGlueRequest * const q);
    ImportCatalogToGlueRequestPrivate(const ImportCatalogToGlueRequestPrivate &other,
                                   ImportCatalogToGlueRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportCatalogToGlueRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
