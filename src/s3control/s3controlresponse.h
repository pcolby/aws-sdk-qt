// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3CONTROLRESPONSE_H
#define QTAWS_S3CONTROLRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawss3controlglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace S3Control {

class S3ControlResponsePrivate;

class QTAWSS3CONTROL_EXPORT S3ControlResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    S3ControlResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    S3ControlResponse(S3ControlResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(S3ControlResponse)
    Q_DISABLE_COPY(S3ControlResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
