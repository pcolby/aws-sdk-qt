// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SFNRESPONSE_H
#define QTAWS_SFNRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssfnglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Sfn {

class SfnResponsePrivate;

class QTAWSSFN_EXPORT SfnResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SfnResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SfnResponse(SfnResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SfnResponse)
    Q_DISABLE_COPY(SfnResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
