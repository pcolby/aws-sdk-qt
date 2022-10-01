// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLFTAGREQUEST_P_H
#define QTAWS_GETLFTAGREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "getlftagrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetLFTagRequest;

class GetLFTagRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetLFTagRequestPrivate(const LakeFormationRequest::Action action,
                                   GetLFTagRequest * const q);
    GetLFTagRequestPrivate(const GetLFTagRequestPrivate &other,
                                   GetLFTagRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLFTagRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
