// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2RESPONSE_H
#define QTAWS_EC2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsec2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ec2 {

class Ec2ResponsePrivate;

class QTAWSEC2_EXPORT Ec2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Ec2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    Ec2Response(Ec2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Ec2Response)
    Q_DISABLE_COPY(Ec2Response)

};

} // namespace Ec2
} // namespace QtAws

#endif
