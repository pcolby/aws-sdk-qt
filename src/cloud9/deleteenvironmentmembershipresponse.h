// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTMEMBERSHIPRESPONSE_H
#define QTAWS_DELETEENVIRONMENTMEMBERSHIPRESPONSE_H

#include "cloud9response.h"
#include "deleteenvironmentmembershiprequest.h"

namespace QtAws {
namespace Cloud9 {

class DeleteEnvironmentMembershipResponsePrivate;

class QTAWSCLOUD9_EXPORT DeleteEnvironmentMembershipResponse : public Cloud9Response {
    Q_OBJECT

public:
    DeleteEnvironmentMembershipResponse(const DeleteEnvironmentMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEnvironmentMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentMembershipResponse)
    Q_DISABLE_COPY(DeleteEnvironmentMembershipResponse)

};

} // namespace Cloud9
} // namespace QtAws

#endif
