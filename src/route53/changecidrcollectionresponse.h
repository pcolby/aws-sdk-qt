// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGECIDRCOLLECTIONRESPONSE_H
#define QTAWS_CHANGECIDRCOLLECTIONRESPONSE_H

#include "route53response.h"
#include "changecidrcollectionrequest.h"

namespace QtAws {
namespace Route53 {

class ChangeCidrCollectionResponsePrivate;

class QTAWSROUTE53_EXPORT ChangeCidrCollectionResponse : public Route53Response {
    Q_OBJECT

public:
    ChangeCidrCollectionResponse(const ChangeCidrCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ChangeCidrCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeCidrCollectionResponse)
    Q_DISABLE_COPY(ChangeCidrCollectionResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
