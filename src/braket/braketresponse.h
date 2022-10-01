// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BRAKETRESPONSE_H
#define QTAWS_BRAKETRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsbraketglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Braket {

class BraketResponsePrivate;

class QTAWSBRAKET_EXPORT BraketResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    BraketResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    BraketResponse(BraketResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BraketResponse)
    Q_DISABLE_COPY(BraketResponse)

};

} // namespace Braket
} // namespace QtAws

#endif
