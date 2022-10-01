// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTFAILURESREQUEST_P_H
#define QTAWS_LISTIMPORTFAILURESREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "listimportfailuresrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListImportFailuresRequest;

class ListImportFailuresRequestPrivate : public CloudTrailRequestPrivate {

public:
    ListImportFailuresRequestPrivate(const CloudTrailRequest::Action action,
                                   ListImportFailuresRequest * const q);
    ListImportFailuresRequestPrivate(const ListImportFailuresRequestPrivate &other,
                                   ListImportFailuresRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImportFailuresRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
