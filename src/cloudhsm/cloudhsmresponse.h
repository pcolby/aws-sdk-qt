// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMRESPONSE_H
#define QTAWS_CLOUDHSMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudhsmglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudHsm {

class CloudHsmResponsePrivate;

class QTAWSCLOUDHSM_EXPORT CloudHsmResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudHsmResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudHsmResponse(CloudHsmResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudHsmResponse)
    Q_DISABLE_COPY(CloudHsmResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
