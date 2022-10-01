// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERIFIEDEMAILADDRESSESRESPONSE_H
#define QTAWS_LISTVERIFIEDEMAILADDRESSESRESPONSE_H

#include "sesresponse.h"
#include "listverifiedemailaddressesrequest.h"

namespace QtAws {
namespace Ses {

class ListVerifiedEmailAddressesResponsePrivate;

class QTAWSSES_EXPORT ListVerifiedEmailAddressesResponse : public SesResponse {
    Q_OBJECT

public:
    ListVerifiedEmailAddressesResponse(const ListVerifiedEmailAddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVerifiedEmailAddressesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVerifiedEmailAddressesResponse)
    Q_DISABLE_COPY(ListVerifiedEmailAddressesResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
