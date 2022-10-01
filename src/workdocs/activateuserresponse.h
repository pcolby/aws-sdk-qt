// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEUSERRESPONSE_H
#define QTAWS_ACTIVATEUSERRESPONSE_H

#include "workdocsresponse.h"
#include "activateuserrequest.h"

namespace QtAws {
namespace WorkDocs {

class ActivateUserResponsePrivate;

class QTAWSWORKDOCS_EXPORT ActivateUserResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    ActivateUserResponse(const ActivateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateUserResponse)
    Q_DISABLE_COPY(ActivateUserResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
