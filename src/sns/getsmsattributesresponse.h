// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSATTRIBUTESRESPONSE_H
#define QTAWS_GETSMSATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "getsmsattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetSMSAttributesResponsePrivate;

class QTAWSSNS_EXPORT GetSMSAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    GetSMSAttributesResponse(const GetSMSAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSMSAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSMSAttributesResponse)
    Q_DISABLE_COPY(GetSMSAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
