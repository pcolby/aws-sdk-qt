// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMSIGNINGATTRIBUTESRESPONSE_H
#define QTAWS_PUTEMAILIDENTITYDKIMSIGNINGATTRIBUTESRESPONSE_H

#include "sesv2response.h"
#include "putemailidentitydkimsigningattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityDkimSigningAttributesResponsePrivate;

class QTAWSSESV2_EXPORT PutEmailIdentityDkimSigningAttributesResponse : public SESv2Response {
    Q_OBJECT

public:
    PutEmailIdentityDkimSigningAttributesResponse(const PutEmailIdentityDkimSigningAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEmailIdentityDkimSigningAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityDkimSigningAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityDkimSigningAttributesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
