// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONWORKFLOWRESPONSE_P_H
#define QTAWS_CREATEINTEGRATIONWORKFLOWRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateIntegrationWorkflowResponse;

class CreateIntegrationWorkflowResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit CreateIntegrationWorkflowResponsePrivate(CreateIntegrationWorkflowResponse * const q);

    void parseCreateIntegrationWorkflowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIntegrationWorkflowResponse)
    Q_DISABLE_COPY(CreateIntegrationWorkflowResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
