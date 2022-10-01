// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDTRAILRESPONSE_H
#define QTAWS_CLOUDTRAILRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudtrailglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudTrail {

class CloudTrailResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT CloudTrailResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudTrailResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudTrailResponse(CloudTrailResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudTrailResponse)
    Q_DISABLE_COPY(CloudTrailResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
