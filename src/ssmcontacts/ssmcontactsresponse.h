// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMCONTACTSRESPONSE_H
#define QTAWS_SSMCONTACTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsssmcontactsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SsmContacts {

class SsmContactsResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT SsmContactsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SsmContactsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SsmContactsResponse(SsmContactsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsmContactsResponse)
    Q_DISABLE_COPY(SsmContactsResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
