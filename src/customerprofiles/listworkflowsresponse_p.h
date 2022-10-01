// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSRESPONSE_P_H
#define QTAWS_LISTWORKFLOWSRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class ListWorkflowsResponse;

class ListWorkflowsResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit ListWorkflowsResponsePrivate(ListWorkflowsResponse * const q);

    void parseListWorkflowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkflowsResponse)
    Q_DISABLE_COPY(ListWorkflowsResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
