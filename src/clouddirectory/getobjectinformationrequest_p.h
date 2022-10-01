// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTINFORMATIONREQUEST_P_H
#define QTAWS_GETOBJECTINFORMATIONREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getobjectinformationrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectInformationRequest;

class GetObjectInformationRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetObjectInformationRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetObjectInformationRequest * const q);
    GetObjectInformationRequestPrivate(const GetObjectInformationRequestPrivate &other,
                                   GetObjectInformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectInformationRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
