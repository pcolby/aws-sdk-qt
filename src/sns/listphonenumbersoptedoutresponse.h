// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSOPTEDOUTRESPONSE_H
#define QTAWS_LISTPHONENUMBERSOPTEDOUTRESPONSE_H

#include "snsresponse.h"
#include "listphonenumbersoptedoutrequest.h"

namespace QtAws {
namespace Sns {

class ListPhoneNumbersOptedOutResponsePrivate;

class QTAWSSNS_EXPORT ListPhoneNumbersOptedOutResponse : public SnsResponse {
    Q_OBJECT

public:
    ListPhoneNumbersOptedOutResponse(const ListPhoneNumbersOptedOutRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPhoneNumbersOptedOutRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumbersOptedOutResponse)
    Q_DISABLE_COPY(ListPhoneNumbersOptedOutResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
