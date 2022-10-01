// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALPOLICIESRESPONSE_H
#define QTAWS_LISTPRINCIPALPOLICIESRESPONSE_H

#include "iotresponse.h"
#include "listprincipalpoliciesrequest.h"

namespace QtAws {
namespace IoT {

class ListPrincipalPoliciesResponsePrivate;

class QTAWSIOT_EXPORT ListPrincipalPoliciesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListPrincipalPoliciesResponse(const ListPrincipalPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPrincipalPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPrincipalPoliciesResponse)
    Q_DISABLE_COPY(ListPrincipalPoliciesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
