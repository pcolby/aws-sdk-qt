// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMODULEMETADATARESPONSE_P_H
#define QTAWS_UPDATECONTACTFLOWMODULEMETADATARESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowModuleMetadataResponse;

class UpdateContactFlowModuleMetadataResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateContactFlowModuleMetadataResponsePrivate(UpdateContactFlowModuleMetadataResponse * const q);

    void parseUpdateContactFlowModuleMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowModuleMetadataResponse)
    Q_DISABLE_COPY(UpdateContactFlowModuleMetadataResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
