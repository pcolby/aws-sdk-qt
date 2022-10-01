// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FRAUDDETECTORRESPONSE_H
#define QTAWS_FRAUDDETECTORRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsfrauddetectorglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace FraudDetector {

class FraudDetectorResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT FraudDetectorResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    FraudDetectorResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    FraudDetectorResponse(FraudDetectorResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FraudDetectorResponse)
    Q_DISABLE_COPY(FraudDetectorResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
