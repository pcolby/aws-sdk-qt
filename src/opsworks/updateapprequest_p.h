// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPREQUEST_P_H
#define QTAWS_UPDATEAPPREQUEST_P_H

#include "opsworksrequest_p.h"
#include "updateapprequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateAppRequest;

class UpdateAppRequestPrivate : public OpsWorksRequestPrivate {

public:
    UpdateAppRequestPrivate(const OpsWorksRequest::Action action,
                                   UpdateAppRequest * const q);
    UpdateAppRequestPrivate(const UpdateAppRequestPrivate &other,
                                   UpdateAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
