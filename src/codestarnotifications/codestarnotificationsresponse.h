// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARNOTIFICATIONSRESPONSE_H
#define QTAWS_CODESTARNOTIFICATIONSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodestarnotificationsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodestarNotifications {

class CodestarNotificationsResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT CodestarNotificationsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodestarNotificationsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodestarNotificationsResponse(CodestarNotificationsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodestarNotificationsResponse)
    Q_DISABLE_COPY(CodestarNotificationsResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
