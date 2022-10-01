// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RAMRESPONSE_H
#define QTAWS_RAMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsramglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ram {

class RamResponsePrivate;

class QTAWSRAM_EXPORT RamResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RamResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RamResponse(RamResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RamResponse)
    Q_DISABLE_COPY(RamResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
