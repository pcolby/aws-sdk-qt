// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATERESPONSE_H
#define QTAWS_TRANSLATERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawstranslateglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Translate {

class TranslateResponsePrivate;

class QTAWSTRANSLATE_EXPORT TranslateResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    TranslateResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    TranslateResponse(TranslateResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranslateResponse)
    Q_DISABLE_COPY(TranslateResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
