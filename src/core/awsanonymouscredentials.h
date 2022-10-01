// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSANONYMOUSCREDENTIALS_H
#define AWSANONYMOUSCREDENTIALS_H

#include "awsabstractcredentials.h"

namespace QtAws {
namespace Core {

class QTAWSCORE_EXPORT AwsAnonymousCredentials : public AwsAbstractCredentials {
    Q_OBJECT

public:
    AwsAnonymousCredentials(QObject * const parent = 0);

    virtual QString accessKeyId() const Q_DECL_OVERRIDE;
    virtual QString secretKey() const Q_DECL_OVERRIDE;
    virtual QString token() const Q_DECL_OVERRIDE;

private:
    Q_DISABLE_COPY(AwsAnonymousCredentials)

};

} // namespace Core
} // namespace QtAws

#endif
