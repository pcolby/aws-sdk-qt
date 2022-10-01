// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTAPPRESPONSE_H
#define QTAWS_SUPPORTAPPRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssupportappglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SupportApp {

class SupportAppResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT SupportAppResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SupportAppResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SupportAppResponse(SupportAppResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SupportAppResponse)
    Q_DISABLE_COPY(SupportAppResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
