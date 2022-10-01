// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKIDENTITYRESPONSE_H
#define QTAWS_CHIMESDKIDENTITYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawschimesdkidentityglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ChimeSdkIdentityResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT ChimeSdkIdentityResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ChimeSdkIdentityResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ChimeSdkIdentityResponse(ChimeSdkIdentityResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChimeSdkIdentityResponse)
    Q_DISABLE_COPY(ChimeSdkIdentityResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
