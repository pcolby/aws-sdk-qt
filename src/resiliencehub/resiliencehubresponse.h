// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESILIENCEHUBRESPONSE_H
#define QTAWS_RESILIENCEHUBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsresiliencehubglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ResilienceHub {

class ResilienceHubResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ResilienceHubResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ResilienceHubResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ResilienceHubResponse(ResilienceHubResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResilienceHubResponse)
    Q_DISABLE_COPY(ResilienceHubResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
