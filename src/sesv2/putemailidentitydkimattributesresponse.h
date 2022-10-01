// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESRESPONSE_H
#define QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESRESPONSE_H

#include "sesv2response.h"
#include "putemailidentitydkimattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityDkimAttributesResponsePrivate;

class QTAWSSESV2_EXPORT PutEmailIdentityDkimAttributesResponse : public SESv2Response {
    Q_OBJECT

public:
    PutEmailIdentityDkimAttributesResponse(const PutEmailIdentityDkimAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEmailIdentityDkimAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityDkimAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityDkimAttributesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
