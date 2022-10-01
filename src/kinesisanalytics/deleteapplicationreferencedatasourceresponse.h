// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCERESPONSE_H
#define QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCERESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "deleteapplicationreferencedatasourcerequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationReferenceDataSourceResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT DeleteApplicationReferenceDataSourceResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    DeleteApplicationReferenceDataSourceResponse(const DeleteApplicationReferenceDataSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationReferenceDataSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationReferenceDataSourceResponse)
    Q_DISABLE_COPY(DeleteApplicationReferenceDataSourceResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
