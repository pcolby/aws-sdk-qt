// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFEATURESREQUEST_P_H
#define QTAWS_LISTFEATURESREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "listfeaturesrequest.h"

namespace QtAws {
namespace Evidently {

class ListFeaturesRequest;

class ListFeaturesRequestPrivate : public EvidentlyRequestPrivate {

public:
    ListFeaturesRequestPrivate(const EvidentlyRequest::Action action,
                                   ListFeaturesRequest * const q);
    ListFeaturesRequestPrivate(const ListFeaturesRequestPrivate &other,
                                   ListFeaturesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFeaturesRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
