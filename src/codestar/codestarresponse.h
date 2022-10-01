// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARRESPONSE_H
#define QTAWS_CODESTARRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodestarglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodeStar {

class CodeStarResponsePrivate;

class QTAWSCODESTAR_EXPORT CodeStarResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodeStarResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodeStarResponse(CodeStarResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeStarResponse)
    Q_DISABLE_COPY(CodeStarResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
