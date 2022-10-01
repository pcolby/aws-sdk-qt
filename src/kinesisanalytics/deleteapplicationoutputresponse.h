// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONOUTPUTRESPONSE_H
#define QTAWS_DELETEAPPLICATIONOUTPUTRESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "deleteapplicationoutputrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationOutputResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT DeleteApplicationOutputResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    DeleteApplicationOutputResponse(const DeleteApplicationOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationOutputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationOutputResponse)
    Q_DISABLE_COPY(DeleteApplicationOutputResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
