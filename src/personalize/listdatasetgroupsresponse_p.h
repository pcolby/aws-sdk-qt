// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETGROUPSRESPONSE_P_H
#define QTAWS_LISTDATASETGROUPSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListDatasetGroupsResponse;

class ListDatasetGroupsResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListDatasetGroupsResponsePrivate(ListDatasetGroupsResponse * const q);

    void parseListDatasetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasetGroupsResponse)
    Q_DISABLE_COPY(ListDatasetGroupsResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
