// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEGROUPSRESPONSE_P_H
#define QTAWS_MODIFYINSTANCEGROUPSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ModifyInstanceGroupsResponse;

class ModifyInstanceGroupsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ModifyInstanceGroupsResponsePrivate(ModifyInstanceGroupsResponse * const q);

    void parseModifyInstanceGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceGroupsResponse)
    Q_DISABLE_COPY(ModifyInstanceGroupsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
