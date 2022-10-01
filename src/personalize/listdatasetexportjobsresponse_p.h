// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETEXPORTJOBSRESPONSE_P_H
#define QTAWS_LISTDATASETEXPORTJOBSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListDatasetExportJobsResponse;

class ListDatasetExportJobsResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListDatasetExportJobsResponsePrivate(ListDatasetExportJobsResponse * const q);

    void parseListDatasetExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasetExportJobsResponse)
    Q_DISABLE_COPY(ListDatasetExportJobsResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
