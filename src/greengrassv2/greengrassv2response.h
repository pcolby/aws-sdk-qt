// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSV2RESPONSE_H
#define QTAWS_GREENGRASSV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsgreengrassv2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace GreengrassV2 {

class GreengrassV2ResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT GreengrassV2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GreengrassV2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    GreengrassV2Response(GreengrassV2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GreengrassV2Response)
    Q_DISABLE_COPY(GreengrassV2Response)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
