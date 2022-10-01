// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXECUTIONSREQUEST_P_H
#define QTAWS_LISTEXECUTIONSREQUEST_P_H

#include "sfnrequest_p.h"
#include "listexecutionsrequest.h"

namespace QtAws {
namespace Sfn {

class ListExecutionsRequest;

class ListExecutionsRequestPrivate : public SfnRequestPrivate {

public:
    ListExecutionsRequestPrivate(const SfnRequest::Action action,
                                   ListExecutionsRequest * const q);
    ListExecutionsRequestPrivate(const ListExecutionsRequestPrivate &other,
                                   ListExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExecutionsRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
