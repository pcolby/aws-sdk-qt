// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONREFERENCEDATASOURCERESPONSE_P_H
#define QTAWS_ADDAPPLICATIONREFERENCEDATASOURCERESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationReferenceDataSourceResponse;

class AddApplicationReferenceDataSourceResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit AddApplicationReferenceDataSourceResponsePrivate(AddApplicationReferenceDataSourceResponse * const q);

    void parseAddApplicationReferenceDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationReferenceDataSourceResponse)
    Q_DISABLE_COPY(AddApplicationReferenceDataSourceResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
