// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCALLANALYTICSCATEGORIESREQUEST_P_H
#define QTAWS_LISTCALLANALYTICSCATEGORIESREQUEST_P_H

#include "transcriberequest_p.h"
#include "listcallanalyticscategoriesrequest.h"

namespace QtAws {
namespace Transcribe {

class ListCallAnalyticsCategoriesRequest;

class ListCallAnalyticsCategoriesRequestPrivate : public TranscribeRequestPrivate {

public:
    ListCallAnalyticsCategoriesRequestPrivate(const TranscribeRequest::Action action,
                                   ListCallAnalyticsCategoriesRequest * const q);
    ListCallAnalyticsCategoriesRequestPrivate(const ListCallAnalyticsCategoriesRequestPrivate &other,
                                   ListCallAnalyticsCategoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCallAnalyticsCategoriesRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
