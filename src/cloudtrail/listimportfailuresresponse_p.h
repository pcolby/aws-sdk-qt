// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTFAILURESRESPONSE_P_H
#define QTAWS_LISTIMPORTFAILURESRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class ListImportFailuresResponse;

class ListImportFailuresResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit ListImportFailuresResponsePrivate(ListImportFailuresResponse * const q);

    void parseListImportFailuresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImportFailuresResponse)
    Q_DISABLE_COPY(ListImportFailuresResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
