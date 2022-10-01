// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMERESPONSE_H
#define QTAWS_CHIMERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawschimeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Chime {

class ChimeResponsePrivate;

class QTAWSCHIME_EXPORT ChimeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ChimeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ChimeResponse(ChimeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChimeResponse)
    Q_DISABLE_COPY(ChimeResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
