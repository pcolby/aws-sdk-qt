// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEUSERRESPONSE_H
#define QTAWS_DEACTIVATEUSERRESPONSE_H

#include "workdocsresponse.h"
#include "deactivateuserrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeactivateUserResponsePrivate;

class QTAWSWORKDOCS_EXPORT DeactivateUserResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DeactivateUserResponse(const DeactivateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateUserResponse)
    Q_DISABLE_COPY(DeactivateUserResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
