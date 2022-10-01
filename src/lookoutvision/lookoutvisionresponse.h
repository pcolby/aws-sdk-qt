// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTVISIONRESPONSE_H
#define QTAWS_LOOKOUTVISIONRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslookoutvisionglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LookoutVision {

class LookoutVisionResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT LookoutVisionResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LookoutVisionResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LookoutVisionResponse(LookoutVisionResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookoutVisionResponse)
    Q_DISABLE_COPY(LookoutVisionResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
