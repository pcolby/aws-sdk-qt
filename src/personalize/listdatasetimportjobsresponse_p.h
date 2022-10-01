// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTJOBSRESPONSE_P_H
#define QTAWS_LISTDATASETIMPORTJOBSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListDatasetImportJobsResponse;

class ListDatasetImportJobsResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListDatasetImportJobsResponsePrivate(ListDatasetImportJobsResponse * const q);

    void parseListDatasetImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasetImportJobsResponse)
    Q_DISABLE_COPY(ListDatasetImportJobsResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
