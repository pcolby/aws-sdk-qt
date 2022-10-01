// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECIDRCOLLECTIONRESPONSE_H
#define QTAWS_DELETECIDRCOLLECTIONRESPONSE_H

#include "route53response.h"
#include "deletecidrcollectionrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteCidrCollectionResponsePrivate;

class QTAWSROUTE53_EXPORT DeleteCidrCollectionResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteCidrCollectionResponse(const DeleteCidrCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCidrCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCidrCollectionResponse)
    Q_DISABLE_COPY(DeleteCidrCollectionResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
