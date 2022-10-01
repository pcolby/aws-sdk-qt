// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONSRESPONSE_H
#define QTAWS_LISTORGANIZATIONSRESPONSE_H

#include "workmailresponse.h"
#include "listorganizationsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListOrganizationsResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListOrganizationsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListOrganizationsResponse(const ListOrganizationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOrganizationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationsResponse)
    Q_DISABLE_COPY(ListOrganizationsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
