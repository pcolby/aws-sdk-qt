// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEGROUPSRESPONSE_P_H
#define QTAWS_LISTINSTANCEGROUPSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListInstanceGroupsResponse;

class ListInstanceGroupsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListInstanceGroupsResponsePrivate(ListInstanceGroupsResponse * const q);

    void parseListInstanceGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstanceGroupsResponse)
    Q_DISABLE_COPY(ListInstanceGroupsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
