// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREUSABLEDELEGATIONSETRESPONSE_H
#define QTAWS_CREATEREUSABLEDELEGATIONSETRESPONSE_H

#include "route53response.h"
#include "createreusabledelegationsetrequest.h"

namespace QtAws {
namespace Route53 {

class CreateReusableDelegationSetResponsePrivate;

class QTAWSROUTE53_EXPORT CreateReusableDelegationSetResponse : public Route53Response {
    Q_OBJECT

public:
    CreateReusableDelegationSetResponse(const CreateReusableDelegationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReusableDelegationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReusableDelegationSetResponse)
    Q_DISABLE_COPY(CreateReusableDelegationSetResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
