// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINDEXREQUEST_P_H
#define QTAWS_CREATEINDEXREQUEST_P_H

#include "kendrarequest_p.h"
#include "createindexrequest.h"

namespace QtAws {
namespace Kendra {

class CreateIndexRequest;

class CreateIndexRequestPrivate : public KendraRequestPrivate {

public:
    CreateIndexRequestPrivate(const KendraRequest::Action action,
                                   CreateIndexRequest * const q);
    CreateIndexRequestPrivate(const CreateIndexRequestPrivate &other,
                                   CreateIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIndexRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
