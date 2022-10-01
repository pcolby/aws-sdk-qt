// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVIDENTLYRESPONSE_H
#define QTAWS_EVIDENTLYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsevidentlyglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Evidently {

class EvidentlyResponsePrivate;

class QTAWSEVIDENTLY_EXPORT EvidentlyResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EvidentlyResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EvidentlyResponse(EvidentlyResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvidentlyResponse)
    Q_DISABLE_COPY(EvidentlyResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
