// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DLMRESPONSE_H
#define QTAWS_DLMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdlmglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Dlm {

class DlmResponsePrivate;

class QTAWSDLM_EXPORT DlmResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DlmResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DlmResponse(DlmResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DlmResponse)
    Q_DISABLE_COPY(DlmResponse)

};

} // namespace Dlm
} // namespace QtAws

#endif
