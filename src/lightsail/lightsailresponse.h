// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LIGHTSAILRESPONSE_H
#define QTAWS_LIGHTSAILRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslightsailglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Lightsail {

class LightsailResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT LightsailResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LightsailResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LightsailResponse(LightsailResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LightsailResponse)
    Q_DISABLE_COPY(LightsailResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
