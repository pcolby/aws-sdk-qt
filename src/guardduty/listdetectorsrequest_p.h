// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORSREQUEST_P_H
#define QTAWS_LISTDETECTORSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "listdetectorsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListDetectorsRequest;

class ListDetectorsRequestPrivate : public GuardDutyRequestPrivate {

public:
    ListDetectorsRequestPrivate(const GuardDutyRequest::Action action,
                                   ListDetectorsRequest * const q);
    ListDetectorsRequestPrivate(const ListDetectorsRequestPrivate &other,
                                   ListDetectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDetectorsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
