// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESIZEREQUEST_P_H
#define QTAWS_CANCELRESIZEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "cancelresizerequest.h"

namespace QtAws {
namespace Redshift {

class CancelResizeRequest;

class CancelResizeRequestPrivate : public RedshiftRequestPrivate {

public:
    CancelResizeRequestPrivate(const RedshiftRequest::Action action,
                                   CancelResizeRequest * const q);
    CancelResizeRequestPrivate(const CancelResizeRequestPrivate &other,
                                   CancelResizeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelResizeRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
