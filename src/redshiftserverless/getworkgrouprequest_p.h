// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKGROUPREQUEST_P_H
#define QTAWS_GETWORKGROUPREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "getworkgrouprequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetWorkgroupRequest;

class GetWorkgroupRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    GetWorkgroupRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   GetWorkgroupRequest * const q);
    GetWorkgroupRequestPrivate(const GetWorkgroupRequestPrivate &other,
                                   GetWorkgroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkgroupRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
