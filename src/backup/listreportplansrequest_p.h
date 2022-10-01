// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTPLANSREQUEST_P_H
#define QTAWS_LISTREPORTPLANSREQUEST_P_H

#include "backuprequest_p.h"
#include "listreportplansrequest.h"

namespace QtAws {
namespace Backup {

class ListReportPlansRequest;

class ListReportPlansRequestPrivate : public BackupRequestPrivate {

public:
    ListReportPlansRequestPrivate(const BackupRequest::Action action,
                                   ListReportPlansRequest * const q);
    ListReportPlansRequestPrivate(const ListReportPlansRequestPrivate &other,
                                   ListReportPlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReportPlansRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
