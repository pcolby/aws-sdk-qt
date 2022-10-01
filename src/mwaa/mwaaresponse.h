// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MWAARESPONSE_H
#define QTAWS_MWAARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmwaaglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Mwaa {

class MwaaResponsePrivate;

class QTAWSMWAA_EXPORT MwaaResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MwaaResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MwaaResponse(MwaaResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MwaaResponse)
    Q_DISABLE_COPY(MwaaResponse)

};

} // namespace Mwaa
} // namespace QtAws

#endif
