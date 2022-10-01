// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCONTACTLENSRESPONSE_H
#define QTAWS_CONNECTCONTACTLENSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsconnectcontactlensglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ConnectContactLens {

class ConnectContactLensResponsePrivate;

class QTAWSCONNECTCONTACTLENS_EXPORT ConnectContactLensResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ConnectContactLensResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ConnectContactLensResponse(ConnectContactLensResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectContactLensResponse)
    Q_DISABLE_COPY(ConnectContactLensResponse)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif
