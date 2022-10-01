// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCERESPONSE_H
#define QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCERESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "deleteapplicationreferencedatasourcerequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationReferenceDataSourceResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationReferenceDataSourceResponse : public KinesisAnalyticsV2Response {
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

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
