// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSSIGNATUREV1_H
#define AWSSIGNATUREV1_H

#include "qtawscoreglobal.h"
#include "awssignaturev0.h"

namespace QtAws {
namespace Core {

class AwsSignatureV1Private;

class QTAWSCORE_EXPORT AwsSignatureV1 : public AwsSignatureV0 {

public:
    AwsSignatureV1();

    virtual int version() const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AwsSignatureV1)
    Q_DISABLE_COPY(AwsSignatureV1)
    friend class TestAwsSignatureV1;
};

} // namespace Core
} // namespace QtAws

#endif
