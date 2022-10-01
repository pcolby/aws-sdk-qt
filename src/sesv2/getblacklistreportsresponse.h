// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLACKLISTREPORTSRESPONSE_H
#define QTAWS_GETBLACKLISTREPORTSRESPONSE_H

#include "sesv2response.h"
#include "getblacklistreportsrequest.h"

namespace QtAws {
namespace SESv2 {

class GetBlacklistReportsResponsePrivate;

class QTAWSSESV2_EXPORT GetBlacklistReportsResponse : public SESv2Response {
    Q_OBJECT

public:
    GetBlacklistReportsResponse(const GetBlacklistReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBlacklistReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlacklistReportsResponse)
    Q_DISABLE_COPY(GetBlacklistReportsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
