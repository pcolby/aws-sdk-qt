// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTLENSREQUEST_P_H
#define QTAWS_IMPORTLENSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "importlensrequest.h"

namespace QtAws {
namespace WellArchitected {

class ImportLensRequest;

class ImportLensRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ImportLensRequestPrivate(const WellArchitectedRequest::Action action,
                                   ImportLensRequest * const q);
    ImportLensRequestPrivate(const ImportLensRequestPrivate &other,
                                   ImportLensRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportLensRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
