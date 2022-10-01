// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYPRINCIPALSRESPONSE_H
#define QTAWS_LISTPOLICYPRINCIPALSRESPONSE_H

#include "iotresponse.h"
#include "listpolicyprincipalsrequest.h"

namespace QtAws {
namespace IoT {

class ListPolicyPrincipalsResponsePrivate;

class QTAWSIOT_EXPORT ListPolicyPrincipalsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListPolicyPrincipalsResponse(const ListPolicyPrincipalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPolicyPrincipalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyPrincipalsResponse)
    Q_DISABLE_COPY(ListPolicyPrincipalsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
