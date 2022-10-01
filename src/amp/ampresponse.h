// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPRESPONSE_H
#define QTAWS_AMPRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsampglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Amp {

class AmpResponsePrivate;

class QTAWSAMP_EXPORT AmpResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AmpResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AmpResponse(AmpResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AmpResponse)
    Q_DISABLE_COPY(AmpResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
