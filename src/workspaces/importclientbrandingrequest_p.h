// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCLIENTBRANDINGREQUEST_P_H
#define QTAWS_IMPORTCLIENTBRANDINGREQUEST_P_H

#include "workspacesrequest_p.h"
#include "importclientbrandingrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ImportClientBrandingRequest;

class ImportClientBrandingRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ImportClientBrandingRequestPrivate(const WorkSpacesRequest::Action action,
                                   ImportClientBrandingRequest * const q);
    ImportClientBrandingRequestPrivate(const ImportClientBrandingRequestPrivate &other,
                                   ImportClientBrandingRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportClientBrandingRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
