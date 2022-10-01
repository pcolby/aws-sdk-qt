// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSRESPONSE_H
#define QTAWS_KINESISANALYTICSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskinesisanalyticsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace KinesisAnalytics {

class KinesisAnalyticsResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT KinesisAnalyticsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KinesisAnalyticsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KinesisAnalyticsResponse(KinesisAnalyticsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisAnalyticsResponse)
    Q_DISABLE_COPY(KinesisAnalyticsResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
