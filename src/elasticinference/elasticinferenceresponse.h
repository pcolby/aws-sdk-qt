// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICINFERENCERESPONSE_H
#define QTAWS_ELASTICINFERENCERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawselasticinferenceglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ElasticInference {

class ElasticInferenceResponsePrivate;

class QTAWSELASTICINFERENCE_EXPORT ElasticInferenceResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ElasticInferenceResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ElasticInferenceResponse(ElasticInferenceResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticInferenceResponse)
    Q_DISABLE_COPY(ElasticInferenceResponse)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
