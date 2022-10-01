// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDINSTANCEGROUPSRESPONSE_P_H
#define QTAWS_ADDINSTANCEGROUPSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class AddInstanceGroupsResponse;

class AddInstanceGroupsResponsePrivate : public EmrResponsePrivate {

public:

    explicit AddInstanceGroupsResponsePrivate(AddInstanceGroupsResponse * const q);

    void parseAddInstanceGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddInstanceGroupsResponse)
    Q_DISABLE_COPY(AddInstanceGroupsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
