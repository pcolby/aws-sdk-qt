// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOPYJOBREQUEST_P_H
#define QTAWS_DESCRIBECOPYJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "describecopyjobrequest.h"

namespace QtAws {
namespace Backup {

class DescribeCopyJobRequest;

class DescribeCopyJobRequestPrivate : public BackupRequestPrivate {

public:
    DescribeCopyJobRequestPrivate(const BackupRequest::Action action,
                                   DescribeCopyJobRequest * const q);
    DescribeCopyJobRequestPrivate(const DescribeCopyJobRequestPrivate &other,
                                   DescribeCopyJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCopyJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
