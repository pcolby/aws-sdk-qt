// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSREQUEST_P_H
#define QTAWS_LISTRECOVERYPOINTSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "listrecoverypointsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListRecoveryPointsRequest;

class ListRecoveryPointsRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    ListRecoveryPointsRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   ListRecoveryPointsRequest * const q);
    ListRecoveryPointsRequestPrivate(const ListRecoveryPointsRequestPrivate &other,
                                   ListRecoveryPointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecoveryPointsRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
