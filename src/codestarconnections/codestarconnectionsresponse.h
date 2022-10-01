// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARCONNECTIONSRESPONSE_H
#define QTAWS_CODESTARCONNECTIONSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodestarconnectionsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodeStarconnections {

class CodeStarconnectionsResponsePrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT CodeStarconnectionsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodeStarconnectionsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodeStarconnectionsResponse(CodeStarconnectionsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeStarconnectionsResponse)
    Q_DISABLE_COPY(CodeStarconnectionsResponse)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
