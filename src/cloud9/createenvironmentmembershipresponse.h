// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTMEMBERSHIPRESPONSE_H
#define QTAWS_CREATEENVIRONMENTMEMBERSHIPRESPONSE_H

#include "cloud9response.h"
#include "createenvironmentmembershiprequest.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentMembershipResponsePrivate;

class QTAWSCLOUD9_EXPORT CreateEnvironmentMembershipResponse : public Cloud9Response {
    Q_OBJECT

public:
    CreateEnvironmentMembershipResponse(const CreateEnvironmentMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEnvironmentMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentMembershipResponse)
    Q_DISABLE_COPY(CreateEnvironmentMembershipResponse)

};

} // namespace Cloud9
} // namespace QtAws

#endif
