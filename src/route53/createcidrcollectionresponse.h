// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECIDRCOLLECTIONRESPONSE_H
#define QTAWS_CREATECIDRCOLLECTIONRESPONSE_H

#include "route53response.h"
#include "createcidrcollectionrequest.h"

namespace QtAws {
namespace Route53 {

class CreateCidrCollectionResponsePrivate;

class QTAWSROUTE53_EXPORT CreateCidrCollectionResponse : public Route53Response {
    Q_OBJECT

public:
    CreateCidrCollectionResponse(const CreateCidrCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCidrCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCidrCollectionResponse)
    Q_DISABLE_COPY(CreateCidrCollectionResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
