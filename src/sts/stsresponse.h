// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STSRESPONSE_H
#define QTAWS_STSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsstsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Sts {

class StsResponsePrivate;

class QTAWSSTS_EXPORT StsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    StsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    StsResponse(StsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StsResponse)
    Q_DISABLE_COPY(StsResponse)

};

} // namespace Sts
} // namespace QtAws

#endif
