// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKGROUPREQUEST_P_H
#define QTAWS_CREATEWORKGROUPREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "createworkgrouprequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateWorkgroupRequest;

class CreateWorkgroupRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    CreateWorkgroupRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   CreateWorkgroupRequest * const q);
    CreateWorkgroupRequestPrivate(const CreateWorkgroupRequestPrivate &other,
                                   CreateWorkgroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkgroupRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
