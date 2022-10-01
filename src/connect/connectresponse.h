// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTRESPONSE_H
#define QTAWS_CONNECTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsconnectglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Connect {

class ConnectResponsePrivate;

class QTAWSCONNECT_EXPORT ConnectResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ConnectResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ConnectResponse(ConnectResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectResponse)
    Q_DISABLE_COPY(ConnectResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
