// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FISRESPONSE_H
#define QTAWS_FISRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsfisglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Fis {

class FisResponsePrivate;

class QTAWSFIS_EXPORT FisResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    FisResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    FisResponse(FisResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FisResponse)
    Q_DISABLE_COPY(FisResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
