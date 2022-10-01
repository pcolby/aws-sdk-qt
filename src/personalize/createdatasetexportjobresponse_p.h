// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETEXPORTJOBRESPONSE_P_H
#define QTAWS_CREATEDATASETEXPORTJOBRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetExportJobResponse;

class CreateDatasetExportJobResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit CreateDatasetExportJobResponsePrivate(CreateDatasetExportJobResponse * const q);

    void parseCreateDatasetExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDatasetExportJobResponse)
    Q_DISABLE_COPY(CreateDatasetExportJobResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
