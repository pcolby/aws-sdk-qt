// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONRESPONSE_H
#define QTAWS_DELETEORGANIZATIONRESPONSE_H

#include "workmailresponse.h"
#include "deleteorganizationrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteOrganizationResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteOrganizationResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteOrganizationResponse(const DeleteOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOrganizationResponse)
    Q_DISABLE_COPY(DeleteOrganizationResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
