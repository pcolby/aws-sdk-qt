// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALTERNATECONTACTRESPONSE_H
#define QTAWS_DELETEALTERNATECONTACTRESPONSE_H

#include "accountresponse.h"
#include "deletealternatecontactrequest.h"

namespace QtAws {
namespace Account {

class DeleteAlternateContactResponsePrivate;

class QTAWSACCOUNT_EXPORT DeleteAlternateContactResponse : public AccountResponse {
    Q_OBJECT

public:
    DeleteAlternateContactResponse(const DeleteAlternateContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAlternateContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlternateContactResponse)
    Q_DISABLE_COPY(DeleteAlternateContactResponse)

};

} // namespace Account
} // namespace QtAws

#endif
