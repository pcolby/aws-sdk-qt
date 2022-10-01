// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCREATEACCOUNTSTATUSRESPONSE_H
#define QTAWS_LISTCREATEACCOUNTSTATUSRESPONSE_H

#include "organizationsresponse.h"
#include "listcreateaccountstatusrequest.h"

namespace QtAws {
namespace Organizations {

class ListCreateAccountStatusResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListCreateAccountStatusResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListCreateAccountStatusResponse(const ListCreateAccountStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCreateAccountStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCreateAccountStatusResponse)
    Q_DISABLE_COPY(ListCreateAccountStatusResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
