// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDCONTROLRESPONSE_H
#define QTAWS_CLOUDCONTROLRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudcontrolglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudControl {

class CloudControlResponsePrivate;

class QTAWSCLOUDCONTROL_EXPORT CloudControlResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudControlResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudControlResponse(CloudControlResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudControlResponse)
    Q_DISABLE_COPY(CloudControlResponse)

};

} // namespace CloudControl
} // namespace QtAws

#endif
