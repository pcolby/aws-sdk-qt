// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKEREDGERESPONSE_H
#define QTAWS_SAGEMAKEREDGERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssagemakeredgeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SagemakerEdge {

class SagemakerEdgeResponsePrivate;

class QTAWSSAGEMAKEREDGE_EXPORT SagemakerEdgeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SagemakerEdgeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SagemakerEdgeResponse(SagemakerEdgeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SagemakerEdgeResponse)
    Q_DISABLE_COPY(SagemakerEdgeResponse)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
