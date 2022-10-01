// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSV2RESPONSE_H
#define QTAWS_KINESISANALYTICSV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskinesisanalyticsv2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class KinesisAnalyticsV2ResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT KinesisAnalyticsV2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KinesisAnalyticsV2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    KinesisAnalyticsV2Response(KinesisAnalyticsV2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisAnalyticsV2Response)
    Q_DISABLE_COPY(KinesisAnalyticsV2Response)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
