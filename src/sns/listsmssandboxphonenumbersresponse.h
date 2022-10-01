// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSMSSANDBOXPHONENUMBERSRESPONSE_H
#define QTAWS_LISTSMSSANDBOXPHONENUMBERSRESPONSE_H

#include "snsresponse.h"
#include "listsmssandboxphonenumbersrequest.h"

namespace QtAws {
namespace Sns {

class ListSMSSandboxPhoneNumbersResponsePrivate;

class QTAWSSNS_EXPORT ListSMSSandboxPhoneNumbersResponse : public SnsResponse {
    Q_OBJECT

public:
    ListSMSSandboxPhoneNumbersResponse(const ListSMSSandboxPhoneNumbersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSMSSandboxPhoneNumbersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSMSSandboxPhoneNumbersResponse)
    Q_DISABLE_COPY(ListSMSSandboxPhoneNumbersResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
