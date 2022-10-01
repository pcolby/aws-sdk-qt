// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESRESPONSE_H
#define QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESRESPONSE_H

#include "pinpointemailresponse.h"
#include "putemailidentityfeedbackattributesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutEmailIdentityFeedbackAttributesResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutEmailIdentityFeedbackAttributesResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    PutEmailIdentityFeedbackAttributesResponse(const PutEmailIdentityFeedbackAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEmailIdentityFeedbackAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityFeedbackAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityFeedbackAttributesResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
