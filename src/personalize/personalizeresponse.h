// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZERESPONSE_H
#define QTAWS_PERSONALIZERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspersonalizeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Personalize {

class PersonalizeResponsePrivate;

class QTAWSPERSONALIZE_EXPORT PersonalizeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PersonalizeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PersonalizeResponse(PersonalizeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PersonalizeResponse)
    Q_DISABLE_COPY(PersonalizeResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
