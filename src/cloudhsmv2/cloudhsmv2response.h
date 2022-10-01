// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMV2RESPONSE_H
#define QTAWS_CLOUDHSMV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudhsmv2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudHsmV2 {

class CloudHsmV2ResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT CloudHsmV2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudHsmV2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudHsmV2Response(CloudHsmV2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudHsmV2Response)
    Q_DISABLE_COPY(CloudHsmV2Response)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
