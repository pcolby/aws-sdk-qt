// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTALSERVICEPROVIDERMETADATAREQUEST_P_H
#define QTAWS_GETPORTALSERVICEPROVIDERMETADATAREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "getportalserviceprovidermetadatarequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetPortalServiceProviderMetadataRequest;

class GetPortalServiceProviderMetadataRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    GetPortalServiceProviderMetadataRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   GetPortalServiceProviderMetadataRequest * const q);
    GetPortalServiceProviderMetadataRequestPrivate(const GetPortalServiceProviderMetadataRequestPrivate &other,
                                   GetPortalServiceProviderMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPortalServiceProviderMetadataRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
