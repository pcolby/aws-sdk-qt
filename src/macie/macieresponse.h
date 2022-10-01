// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIERESPONSE_H
#define QTAWS_MACIERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmacieglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Macie {

class MacieResponsePrivate;

class QTAWSMACIE_EXPORT MacieResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MacieResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MacieResponse(MacieResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MacieResponse)
    Q_DISABLE_COPY(MacieResponse)

};

} // namespace Macie
} // namespace QtAws

#endif
