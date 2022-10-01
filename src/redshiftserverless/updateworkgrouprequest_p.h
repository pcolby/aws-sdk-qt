// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKGROUPREQUEST_P_H
#define QTAWS_UPDATEWORKGROUPREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "updateworkgrouprequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateWorkgroupRequest;

class UpdateWorkgroupRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    UpdateWorkgroupRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   UpdateWorkgroupRequest * const q);
    UpdateWorkgroupRequestPrivate(const UpdateWorkgroupRequestPrivate &other,
                                   UpdateWorkgroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkgroupRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
