// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCRLREQUEST_P_H
#define QTAWS_IMPORTCRLREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "importcrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ImportCrlRequest;

class ImportCrlRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    ImportCrlRequestPrivate(const RolesAnywhereRequest::Action action,
                                   ImportCrlRequest * const q);
    ImportCrlRequestPrivate(const ImportCrlRequestPrivate &other,
                                   ImportCrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
