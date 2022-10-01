// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEALIASRESPONSE_H
#define QTAWS_ASSOCIATEALIASRESPONSE_H

#include "cloudfrontresponse.h"
#include "associatealiasrequest.h"

namespace QtAws {
namespace CloudFront {

class AssociateAliasResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT AssociateAliasResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    AssociateAliasResponse(const AssociateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAliasResponse)
    Q_DISABLE_COPY(AssociateAliasResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
