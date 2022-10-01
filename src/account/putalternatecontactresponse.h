// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALTERNATECONTACTRESPONSE_H
#define QTAWS_PUTALTERNATECONTACTRESPONSE_H

#include "accountresponse.h"
#include "putalternatecontactrequest.h"

namespace QtAws {
namespace Account {

class PutAlternateContactResponsePrivate;

class QTAWSACCOUNT_EXPORT PutAlternateContactResponse : public AccountResponse {
    Q_OBJECT

public:
    PutAlternateContactResponse(const PutAlternateContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAlternateContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAlternateContactResponse)
    Q_DISABLE_COPY(PutAlternateContactResponse)

};

} // namespace Account
} // namespace QtAws

#endif
