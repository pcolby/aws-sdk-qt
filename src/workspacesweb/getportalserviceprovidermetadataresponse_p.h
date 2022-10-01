// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTALSERVICEPROVIDERMETADATARESPONSE_P_H
#define QTAWS_GETPORTALSERVICEPROVIDERMETADATARESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetPortalServiceProviderMetadataResponse;

class GetPortalServiceProviderMetadataResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit GetPortalServiceProviderMetadataResponsePrivate(GetPortalServiceProviderMetadataResponse * const q);

    void parseGetPortalServiceProviderMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPortalServiceProviderMetadataResponse)
    Q_DISABLE_COPY(GetPortalServiceProviderMetadataResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
