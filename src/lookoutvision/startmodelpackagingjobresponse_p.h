// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMODELPACKAGINGJOBRESPONSE_P_H
#define QTAWS_STARTMODELPACKAGINGJOBRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class StartModelPackagingJobResponse;

class StartModelPackagingJobResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit StartModelPackagingJobResponsePrivate(StartModelPackagingJobResponse * const q);

    void parseStartModelPackagingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartModelPackagingJobResponse)
    Q_DISABLE_COPY(StartModelPackagingJobResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
