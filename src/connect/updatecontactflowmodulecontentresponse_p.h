// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMODULECONTENTRESPONSE_P_H
#define QTAWS_UPDATECONTACTFLOWMODULECONTENTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowModuleContentResponse;

class UpdateContactFlowModuleContentResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateContactFlowModuleContentResponsePrivate(UpdateContactFlowModuleContentResponse * const q);

    void parseUpdateContactFlowModuleContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowModuleContentResponse)
    Q_DISABLE_COPY(UpdateContactFlowModuleContentResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
