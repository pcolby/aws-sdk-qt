// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCERESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCERESPONSE_P_H

#include "kinesisanalyticsresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationReferenceDataSourceResponse;

class DeleteApplicationReferenceDataSourceResponsePrivate : public KinesisAnalyticsResponsePrivate {

public:

    explicit DeleteApplicationReferenceDataSourceResponsePrivate(DeleteApplicationReferenceDataSourceResponse * const q);

    void parseDeleteApplicationReferenceDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationReferenceDataSourceResponse)
    Q_DISABLE_COPY(DeleteApplicationReferenceDataSourceResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
