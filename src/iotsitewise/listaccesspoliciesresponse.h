// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOLICIESRESPONSE_H
#define QTAWS_LISTACCESSPOLICIESRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listaccesspoliciesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAccessPoliciesResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListAccessPoliciesResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListAccessPoliciesResponse(const ListAccessPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccessPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessPoliciesResponse)
    Q_DISABLE_COPY(ListAccessPoliciesResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
