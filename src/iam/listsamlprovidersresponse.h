// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMLPROVIDERSRESPONSE_H
#define QTAWS_LISTSAMLPROVIDERSRESPONSE_H

#include "iamresponse.h"
#include "listsamlprovidersrequest.h"

namespace QtAws {
namespace Iam {

class ListSAMLProvidersResponsePrivate;

class QTAWSIAM_EXPORT ListSAMLProvidersResponse : public IamResponse {
    Q_OBJECT

public:
    ListSAMLProvidersResponse(const ListSAMLProvidersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSAMLProvidersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSAMLProvidersResponse)
    Q_DISABLE_COPY(ListSAMLProvidersResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
