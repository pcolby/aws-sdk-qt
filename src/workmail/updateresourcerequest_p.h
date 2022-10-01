// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEREQUEST_P_H
#define QTAWS_UPDATERESOURCEREQUEST_P_H

#include "workmailrequest_p.h"
#include "updateresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateResourceRequest;

class UpdateResourceRequestPrivate : public WorkMailRequestPrivate {

public:
    UpdateResourceRequestPrivate(const WorkMailRequest::Action action,
                                   UpdateResourceRequest * const q);
    UpdateResourceRequestPrivate(const UpdateResourceRequestPrivate &other,
                                   UpdateResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
