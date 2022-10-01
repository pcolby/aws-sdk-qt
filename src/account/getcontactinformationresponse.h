// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTINFORMATIONRESPONSE_H
#define QTAWS_GETCONTACTINFORMATIONRESPONSE_H

#include "accountresponse.h"
#include "getcontactinformationrequest.h"

namespace QtAws {
namespace Account {

class GetContactInformationResponsePrivate;

class QTAWSACCOUNT_EXPORT GetContactInformationResponse : public AccountResponse {
    Q_OBJECT

public:
    GetContactInformationResponse(const GetContactInformationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactInformationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactInformationResponse)
    Q_DISABLE_COPY(GetContactInformationResponse)

};

} // namespace Account
} // namespace QtAws

#endif
