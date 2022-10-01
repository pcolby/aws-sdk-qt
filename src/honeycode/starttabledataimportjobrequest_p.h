// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTABLEDATAIMPORTJOBREQUEST_P_H
#define QTAWS_STARTTABLEDATAIMPORTJOBREQUEST_P_H

#include "honeycoderequest_p.h"
#include "starttabledataimportjobrequest.h"

namespace QtAws {
namespace Honeycode {

class StartTableDataImportJobRequest;

class StartTableDataImportJobRequestPrivate : public HoneycodeRequestPrivate {

public:
    StartTableDataImportJobRequestPrivate(const HoneycodeRequest::Action action,
                                   StartTableDataImportJobRequest * const q);
    StartTableDataImportJobRequestPrivate(const StartTableDataImportJobRequestPrivate &other,
                                   StartTableDataImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTableDataImportJobRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
