// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEPORTSTATESREQUEST_P_H
#define QTAWS_GETINSTANCEPORTSTATESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getinstanceportstatesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstancePortStatesRequest;

class GetInstancePortStatesRequestPrivate : public LightsailRequestPrivate {

public:
    GetInstancePortStatesRequestPrivate(const LightsailRequest::Action action,
                                   GetInstancePortStatesRequest * const q);
    GetInstancePortStatesRequestPrivate(const GetInstancePortStatesRequestPrivate &other,
                                   GetInstancePortStatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstancePortStatesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
