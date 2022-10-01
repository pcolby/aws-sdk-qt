// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWTYPESRESPONSE_P_H
#define QTAWS_LISTWORKFLOWTYPESRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class ListWorkflowTypesResponse;

class ListWorkflowTypesResponsePrivate : public SwfResponsePrivate {

public:

    explicit ListWorkflowTypesResponsePrivate(ListWorkflowTypesResponse * const q);

    void parseListWorkflowTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkflowTypesResponse)
    Q_DISABLE_COPY(ListWorkflowTypesResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
