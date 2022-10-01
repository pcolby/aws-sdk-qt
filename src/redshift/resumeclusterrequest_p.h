// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECLUSTERREQUEST_P_H
#define QTAWS_RESUMECLUSTERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "resumeclusterrequest.h"

namespace QtAws {
namespace Redshift {

class ResumeClusterRequest;

class ResumeClusterRequestPrivate : public RedshiftRequestPrivate {

public:
    ResumeClusterRequestPrivate(const RedshiftRequest::Action action,
                                   ResumeClusterRequest * const q);
    ResumeClusterRequestPrivate(const ResumeClusterRequestPrivate &other,
                                   ResumeClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
