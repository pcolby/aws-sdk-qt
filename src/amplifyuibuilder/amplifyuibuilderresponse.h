// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYUIBUILDERRESPONSE_H
#define QTAWS_AMPLIFYUIBUILDERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsamplifyuibuilderglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class AmplifyUIBuilderResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT AmplifyUIBuilderResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AmplifyUIBuilderResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AmplifyUIBuilderResponse(AmplifyUIBuilderResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AmplifyUIBuilderResponse)
    Q_DISABLE_COPY(AmplifyUIBuilderResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
