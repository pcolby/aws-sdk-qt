// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOWNLOADDBLOGFILEPORTIONREQUEST_P_H
#define QTAWS_DOWNLOADDBLOGFILEPORTIONREQUEST_P_H

#include "rdsrequest_p.h"
#include "downloaddblogfileportionrequest.h"

namespace QtAws {
namespace Rds {

class DownloadDBLogFilePortionRequest;

class DownloadDBLogFilePortionRequestPrivate : public RdsRequestPrivate {

public:
    DownloadDBLogFilePortionRequestPrivate(const RdsRequest::Action action,
                                   DownloadDBLogFilePortionRequest * const q);
    DownloadDBLogFilePortionRequestPrivate(const DownloadDBLogFilePortionRequestPrivate &other,
                                   DownloadDBLogFilePortionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DownloadDBLogFilePortionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
