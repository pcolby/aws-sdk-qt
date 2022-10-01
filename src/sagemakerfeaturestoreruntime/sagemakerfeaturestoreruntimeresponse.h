// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERFEATURESTORERUNTIMERESPONSE_H
#define QTAWS_SAGEMAKERFEATURESTORERUNTIMERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssagemakerfeaturestoreruntimeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class SageMakerFeatureStoreRuntimeResponsePrivate;

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT SageMakerFeatureStoreRuntimeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SageMakerFeatureStoreRuntimeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SageMakerFeatureStoreRuntimeResponse(SageMakerFeatureStoreRuntimeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SageMakerFeatureStoreRuntimeResponse)
    Q_DISABLE_COPY(SageMakerFeatureStoreRuntimeResponse)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
