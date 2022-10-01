// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZEDATASHAREREQUEST_P_H
#define QTAWS_DEAUTHORIZEDATASHAREREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deauthorizedatasharerequest.h"

namespace QtAws {
namespace Redshift {

class DeauthorizeDataShareRequest;

class DeauthorizeDataShareRequestPrivate : public RedshiftRequestPrivate {

public:
    DeauthorizeDataShareRequestPrivate(const RedshiftRequest::Action action,
                                   DeauthorizeDataShareRequest * const q);
    DeauthorizeDataShareRequestPrivate(const DeauthorizeDataShareRequestPrivate &other,
                                   DeauthorizeDataShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeauthorizeDataShareRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
