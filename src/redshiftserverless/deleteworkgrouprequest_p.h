// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKGROUPREQUEST_P_H
#define QTAWS_DELETEWORKGROUPREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "deleteworkgrouprequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteWorkgroupRequest;

class DeleteWorkgroupRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    DeleteWorkgroupRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   DeleteWorkgroupRequest * const q);
    DeleteWorkgroupRequestPrivate(const DeleteWorkgroupRequestPrivate &other,
                                   DeleteWorkgroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkgroupRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
