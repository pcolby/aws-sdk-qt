// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTCREDENTIALS_P_H
#define AWSABSTRACTCREDENTIALS_P_H

#include "qtawscoreglobal.h"

namespace QtAws {
namespace Core {

class AwsAbstractCredentials;

// Exported for *internal* use by other QtAws modules only.
class QTAWSCORE_EXPORT AwsAbstractCredentialsPrivate {

public:
    explicit AwsAbstractCredentialsPrivate(AwsAbstractCredentials * const q);

    virtual ~AwsAbstractCredentialsPrivate();

protected:
    AwsAbstractCredentials * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AwsAbstractCredentials)
    Q_DISABLE_COPY(AwsAbstractCredentialsPrivate)

};

} // namespace Core
} // namespace QtAws

#endif
