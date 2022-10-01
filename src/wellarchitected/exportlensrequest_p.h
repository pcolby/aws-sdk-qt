// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTLENSREQUEST_P_H
#define QTAWS_EXPORTLENSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "exportlensrequest.h"

namespace QtAws {
namespace WellArchitected {

class ExportLensRequest;

class ExportLensRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ExportLensRequestPrivate(const WellArchitectedRequest::Action action,
                                   ExportLensRequest * const q);
    ExportLensRequestPrivate(const ExportLensRequestPrivate &other,
                                   ExportLensRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportLensRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
