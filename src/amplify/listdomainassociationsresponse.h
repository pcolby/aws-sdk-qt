// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINASSOCIATIONSRESPONSE_H
#define QTAWS_LISTDOMAINASSOCIATIONSRESPONSE_H

#include "amplifyresponse.h"
#include "listdomainassociationsrequest.h"

namespace QtAws {
namespace Amplify {

class ListDomainAssociationsResponsePrivate;

class QTAWSAMPLIFY_EXPORT ListDomainAssociationsResponse : public AmplifyResponse {
    Q_OBJECT

public:
    ListDomainAssociationsResponse(const ListDomainAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDomainAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainAssociationsResponse)
    Q_DISABLE_COPY(ListDomainAssociationsResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
