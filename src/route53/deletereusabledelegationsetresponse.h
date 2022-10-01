// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREUSABLEDELEGATIONSETRESPONSE_H
#define QTAWS_DELETEREUSABLEDELEGATIONSETRESPONSE_H

#include "route53response.h"
#include "deletereusabledelegationsetrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteReusableDelegationSetResponsePrivate;

class QTAWSROUTE53_EXPORT DeleteReusableDelegationSetResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteReusableDelegationSetResponse(const DeleteReusableDelegationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReusableDelegationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReusableDelegationSetResponse)
    Q_DISABLE_COPY(DeleteReusableDelegationSetResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
