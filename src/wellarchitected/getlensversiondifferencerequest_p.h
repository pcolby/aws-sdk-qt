// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSVERSIONDIFFERENCEREQUEST_P_H
#define QTAWS_GETLENSVERSIONDIFFERENCEREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "getlensversiondifferencerequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensVersionDifferenceRequest;

class GetLensVersionDifferenceRequestPrivate : public WellArchitectedRequestPrivate {

public:
    GetLensVersionDifferenceRequestPrivate(const WellArchitectedRequest::Action action,
                                   GetLensVersionDifferenceRequest * const q);
    GetLensVersionDifferenceRequestPrivate(const GetLensVersionDifferenceRequestPrivate &other,
                                   GetLensVersionDifferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLensVersionDifferenceRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
