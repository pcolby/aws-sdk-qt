// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTMEMBERSHIPRESPONSE_H
#define QTAWS_UPDATEENVIRONMENTMEMBERSHIPRESPONSE_H

#include "cloud9response.h"
#include "updateenvironmentmembershiprequest.h"

namespace QtAws {
namespace Cloud9 {

class UpdateEnvironmentMembershipResponsePrivate;

class QTAWSCLOUD9_EXPORT UpdateEnvironmentMembershipResponse : public Cloud9Response {
    Q_OBJECT

public:
    UpdateEnvironmentMembershipResponse(const UpdateEnvironmentMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEnvironmentMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentMembershipResponse)
    Q_DISABLE_COPY(UpdateEnvironmentMembershipResponse)

};

} // namespace Cloud9
} // namespace QtAws

#endif
