// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTJOBSREQUEST_P_H
#define QTAWS_LISTIMPORTJOBSREQUEST_P_H

#include "sesv2request_p.h"
#include "listimportjobsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListImportJobsRequest;

class ListImportJobsRequestPrivate : public SESv2RequestPrivate {

public:
    ListImportJobsRequestPrivate(const SESv2Request::Action action,
                                   ListImportJobsRequest * const q);
    ListImportJobsRequestPrivate(const ListImportJobsRequestPrivate &other,
                                   ListImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImportJobsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
