// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTPREFERENCESREQUEST_P_H
#define QTAWS_PUTACCOUNTPREFERENCESREQUEST_P_H

#include "efsrequest_p.h"
#include "putaccountpreferencesrequest.h"

namespace QtAws {
namespace Efs {

class PutAccountPreferencesRequest;

class PutAccountPreferencesRequestPrivate : public EfsRequestPrivate {

public:
    PutAccountPreferencesRequestPrivate(const EfsRequest::Action action,
                                   PutAccountPreferencesRequest * const q);
    PutAccountPreferencesRequestPrivate(const PutAccountPreferencesRequestPrivate &other,
                                   PutAccountPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountPreferencesRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
