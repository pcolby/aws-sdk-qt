// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTUSERREQUEST_H
#define QTAWS_GETCURRENTUSERREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetCurrentUserRequestPrivate;

class QTAWSWORKDOCS_EXPORT GetCurrentUserRequest : public WorkDocsRequest {

public:
    GetCurrentUserRequest(const GetCurrentUserRequest &other);
    GetCurrentUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCurrentUserRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
