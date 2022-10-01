// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONOUTPUTRESPONSE_H
#define QTAWS_DELETEAPPLICATIONOUTPUTRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "deleteapplicationoutputrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationOutputResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationOutputResponse : public KinesisAnalyticsV2Response {
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

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
