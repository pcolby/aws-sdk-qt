// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIATAILORRESPONSE_H
#define QTAWS_MEDIATAILORRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmediatailorglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MediaTailor {

class MediaTailorResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT MediaTailorResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MediaTailorResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MediaTailorResponse(MediaTailorResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaTailorResponse)
    Q_DISABLE_COPY(MediaTailorResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
