// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHAREASSOCIATIONSREQUEST_P_H
#define QTAWS_GETRESOURCESHAREASSOCIATIONSREQUEST_P_H

#include "ramrequest_p.h"
#include "getresourceshareassociationsrequest.h"

namespace QtAws {
namespace Ram {

class GetResourceShareAssociationsRequest;

class GetResourceShareAssociationsRequestPrivate : public RamRequestPrivate {

public:
    GetResourceShareAssociationsRequestPrivate(const RamRequest::Action action,
                                   GetResourceShareAssociationsRequest * const q);
    GetResourceShareAssociationsRequestPrivate(const GetResourceShareAssociationsRequestPrivate &other,
                                   GetResourceShareAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceShareAssociationsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
