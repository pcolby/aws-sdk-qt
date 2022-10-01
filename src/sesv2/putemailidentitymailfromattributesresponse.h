// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYMAILFROMATTRIBUTESRESPONSE_H
#define QTAWS_PUTEMAILIDENTITYMAILFROMATTRIBUTESRESPONSE_H

#include "sesv2response.h"
#include "putemailidentitymailfromattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityMailFromAttributesResponsePrivate;

class QTAWSSESV2_EXPORT PutEmailIdentityMailFromAttributesResponse : public SESv2Response {
    Q_OBJECT

public:
    PutEmailIdentityMailFromAttributesResponse(const PutEmailIdentityMailFromAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEmailIdentityMailFromAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityMailFromAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityMailFromAttributesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
