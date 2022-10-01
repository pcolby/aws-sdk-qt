// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEUSERREQUEST_H
#define QTAWS_ACTIVATEUSERREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class ActivateUserRequestPrivate;

class QTAWSWORKDOCS_EXPORT ActivateUserRequest : public WorkDocsRequest {

public:
    ActivateUserRequest(const ActivateUserRequest &other);
    ActivateUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateUserRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
