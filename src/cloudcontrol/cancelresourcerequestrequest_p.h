// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESOURCEREQUESTREQUEST_P_H
#define QTAWS_CANCELRESOURCEREQUESTREQUEST_P_H

#include "cloudcontrolrequest_p.h"
#include "cancelresourcerequestrequest.h"

namespace QtAws {
namespace CloudControl {

class CancelResourceRequestRequest;

class CancelResourceRequestRequestPrivate : public CloudControlRequestPrivate {

public:
    CancelResourceRequestRequestPrivate(const CloudControlRequest::Action action,
                                   CancelResourceRequestRequest * const q);
    CancelResourceRequestRequestPrivate(const CancelResourceRequestRequestPrivate &other,
                                   CancelResourceRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelResourceRequestRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
