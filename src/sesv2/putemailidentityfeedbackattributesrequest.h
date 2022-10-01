// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESREQUEST_H
#define QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityFeedbackAttributesRequestPrivate;

class QTAWSSESV2_EXPORT PutEmailIdentityFeedbackAttributesRequest : public SESv2Request {

public:
    PutEmailIdentityFeedbackAttributesRequest(const PutEmailIdentityFeedbackAttributesRequest &other);
    PutEmailIdentityFeedbackAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailIdentityFeedbackAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
