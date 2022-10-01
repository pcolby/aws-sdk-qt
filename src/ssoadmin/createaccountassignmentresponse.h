// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTASSIGNMENTRESPONSE_H
#define QTAWS_CREATEACCOUNTASSIGNMENTRESPONSE_H

#include "ssoadminresponse.h"
#include "createaccountassignmentrequest.h"

namespace QtAws {
namespace SsoAdmin {

class CreateAccountAssignmentResponsePrivate;

class QTAWSSSOADMIN_EXPORT CreateAccountAssignmentResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    CreateAccountAssignmentResponse(const CreateAccountAssignmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccountAssignmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountAssignmentResponse)
    Q_DISABLE_COPY(CreateAccountAssignmentResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
