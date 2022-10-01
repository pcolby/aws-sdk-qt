// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYCONFIGURATIONSETATTRIBUTESRESPONSE_H
#define QTAWS_PUTEMAILIDENTITYCONFIGURATIONSETATTRIBUTESRESPONSE_H

#include "sesv2response.h"
#include "putemailidentityconfigurationsetattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityConfigurationSetAttributesResponsePrivate;

class QTAWSSESV2_EXPORT PutEmailIdentityConfigurationSetAttributesResponse : public SESv2Response {
    Q_OBJECT

public:
    PutEmailIdentityConfigurationSetAttributesResponse(const PutEmailIdentityConfigurationSetAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEmailIdentityConfigurationSetAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityConfigurationSetAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityConfigurationSetAttributesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
