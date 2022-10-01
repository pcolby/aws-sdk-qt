// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTUSERRESPONSE_H
#define QTAWS_GETCURRENTUSERRESPONSE_H

#include "workdocsresponse.h"
#include "getcurrentuserrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetCurrentUserResponsePrivate;

class QTAWSWORKDOCS_EXPORT GetCurrentUserResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    GetCurrentUserResponse(const GetCurrentUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCurrentUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCurrentUserResponse)
    Q_DISABLE_COPY(GetCurrentUserResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
