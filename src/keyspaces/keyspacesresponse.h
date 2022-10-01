// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KEYSPACESRESPONSE_H
#define QTAWS_KEYSPACESRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskeyspacesglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Keyspaces {

class KeyspacesResponsePrivate;

class QTAWSKEYSPACES_EXPORT KeyspacesResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KeyspacesResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KeyspacesResponse(KeyspacesResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KeyspacesResponse)
    Q_DISABLE_COPY(KeyspacesResponse)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
