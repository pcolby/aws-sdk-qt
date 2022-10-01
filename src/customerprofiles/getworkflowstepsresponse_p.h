// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWSTEPSRESPONSE_P_H
#define QTAWS_GETWORKFLOWSTEPSRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class GetWorkflowStepsResponse;

class GetWorkflowStepsResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit GetWorkflowStepsResponsePrivate(GetWorkflowStepsResponse * const q);

    void parseGetWorkflowStepsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkflowStepsResponse)
    Q_DISABLE_COPY(GetWorkflowStepsResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
