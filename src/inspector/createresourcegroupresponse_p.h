// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEGROUPRESPONSE_P_H
#define QTAWS_CREATERESOURCEGROUPRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class CreateResourceGroupResponse;

class CreateResourceGroupResponsePrivate : public InspectorResponsePrivate {

public:

    explicit CreateResourceGroupResponsePrivate(CreateResourceGroupResponse * const q);

    void parseCreateResourceGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceGroupResponse)
    Q_DISABLE_COPY(CreateResourceGroupResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
