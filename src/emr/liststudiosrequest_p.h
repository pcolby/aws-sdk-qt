// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSREQUEST_P_H
#define QTAWS_LISTSTUDIOSREQUEST_P_H

#include "emrrequest_p.h"
#include "liststudiosrequest.h"

namespace QtAws {
namespace Emr {

class ListStudiosRequest;

class ListStudiosRequestPrivate : public EmrRequestPrivate {

public:
    ListStudiosRequestPrivate(const EmrRequest::Action action,
                                   ListStudiosRequest * const q);
    ListStudiosRequestPrivate(const ListStudiosRequestPrivate &other,
                                   ListStudiosRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStudiosRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
