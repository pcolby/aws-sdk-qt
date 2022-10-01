// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTMITIGATIONACTIONSEXECUTIONSREQUEST_P_H
#define QTAWS_LISTDETECTMITIGATIONACTIONSEXECUTIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listdetectmitigationactionsexecutionsrequest.h"

namespace QtAws {
namespace IoT {

class ListDetectMitigationActionsExecutionsRequest;

class ListDetectMitigationActionsExecutionsRequestPrivate : public IoTRequestPrivate {

public:
    ListDetectMitigationActionsExecutionsRequestPrivate(const IoTRequest::Action action,
                                   ListDetectMitigationActionsExecutionsRequest * const q);
    ListDetectMitigationActionsExecutionsRequestPrivate(const ListDetectMitigationActionsExecutionsRequestPrivate &other,
                                   ListDetectMitigationActionsExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDetectMitigationActionsExecutionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
