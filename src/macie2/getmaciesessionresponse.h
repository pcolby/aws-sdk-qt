// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMACIESESSIONRESPONSE_H
#define QTAWS_GETMACIESESSIONRESPONSE_H

#include "macie2response.h"
#include "getmaciesessionrequest.h"

namespace QtAws {
namespace Macie2 {

class GetMacieSessionResponsePrivate;

class QTAWSMACIE2_EXPORT GetMacieSessionResponse : public Macie2Response {
    Q_OBJECT

public:
    GetMacieSessionResponse(const GetMacieSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMacieSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMacieSessionResponse)
    Q_DISABLE_COPY(GetMacieSessionResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
