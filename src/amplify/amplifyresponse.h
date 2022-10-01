// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYRESPONSE_H
#define QTAWS_AMPLIFYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsamplifyglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Amplify {

class AmplifyResponsePrivate;

class QTAWSAMPLIFY_EXPORT AmplifyResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AmplifyResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AmplifyResponse(AmplifyResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AmplifyResponse)
    Q_DISABLE_COPY(AmplifyResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
