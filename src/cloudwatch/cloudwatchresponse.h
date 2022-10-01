// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHRESPONSE_H
#define QTAWS_CLOUDWATCHRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudwatchglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudWatch {

class CloudWatchResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT CloudWatchResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudWatchResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudWatchResponse(CloudWatchResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudWatchResponse)
    Q_DISABLE_COPY(CloudWatchResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
