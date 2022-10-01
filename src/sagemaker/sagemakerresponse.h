// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERRESPONSE_H
#define QTAWS_SAGEMAKERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssagemakerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SageMaker {

class SageMakerResponsePrivate;

class QTAWSSAGEMAKER_EXPORT SageMakerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SageMakerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SageMakerResponse(SageMakerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SageMakerResponse)
    Q_DISABLE_COPY(SageMakerResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
