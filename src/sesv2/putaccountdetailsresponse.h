// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDETAILSRESPONSE_H
#define QTAWS_PUTACCOUNTDETAILSRESPONSE_H

#include "sesv2response.h"
#include "putaccountdetailsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutAccountDetailsResponsePrivate;

class QTAWSSESV2_EXPORT PutAccountDetailsResponse : public SESv2Response {
    Q_OBJECT

public:
    PutAccountDetailsResponse(const PutAccountDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountDetailsResponse)
    Q_DISABLE_COPY(PutAccountDetailsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
