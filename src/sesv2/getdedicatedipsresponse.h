// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPSRESPONSE_H
#define QTAWS_GETDEDICATEDIPSRESPONSE_H

#include "sesv2response.h"
#include "getdedicatedipsrequest.h"

namespace QtAws {
namespace SESv2 {

class GetDedicatedIpsResponsePrivate;

class QTAWSSESV2_EXPORT GetDedicatedIpsResponse : public SESv2Response {
    Q_OBJECT

public:
    GetDedicatedIpsResponse(const GetDedicatedIpsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDedicatedIpsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDedicatedIpsResponse)
    Q_DISABLE_COPY(GetDedicatedIpsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
