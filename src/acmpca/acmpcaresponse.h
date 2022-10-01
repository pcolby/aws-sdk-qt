// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMPCARESPONSE_H
#define QTAWS_ACMPCARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsacmpcaglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AcmPca {

class AcmPcaResponsePrivate;

class QTAWSACMPCA_EXPORT AcmPcaResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AcmPcaResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AcmPcaResponse(AcmPcaResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcmPcaResponse)
    Q_DISABLE_COPY(AcmPcaResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
