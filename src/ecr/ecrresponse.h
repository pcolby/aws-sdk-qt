// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRRESPONSE_H
#define QTAWS_ECRRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsecrglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ecr {

class EcrResponsePrivate;

class QTAWSECR_EXPORT EcrResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EcrResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EcrResponse(EcrResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EcrResponse)
    Q_DISABLE_COPY(EcrResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
