// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TEXTRACTRESPONSE_H
#define QTAWS_TEXTRACTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawstextractglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Textract {

class TextractResponsePrivate;

class QTAWSTEXTRACT_EXPORT TextractResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    TextractResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    TextractResponse(TextractResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TextractResponse)
    Q_DISABLE_COPY(TextractResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
