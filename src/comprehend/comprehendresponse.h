// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDRESPONSE_H
#define QTAWS_COMPREHENDRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscomprehendglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Comprehend {

class ComprehendResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ComprehendResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ComprehendResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ComprehendResponse(ComprehendResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ComprehendResponse)
    Q_DISABLE_COPY(ComprehendResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
