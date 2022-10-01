// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKAPPLICATIONRESPONSE_H
#define QTAWS_ROLLBACKAPPLICATIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "rollbackapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class RollbackApplicationResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT RollbackApplicationResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    RollbackApplicationResponse(const RollbackApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RollbackApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RollbackApplicationResponse)
    Q_DISABLE_COPY(RollbackApplicationResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
