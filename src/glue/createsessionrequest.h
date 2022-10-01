// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESESSIONREQUEST_H
#define QTAWS_CREATESESSIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateSessionRequestPrivate;

class QTAWSGLUE_EXPORT CreateSessionRequest : public GlueRequest {

public:
    CreateSessionRequest(const CreateSessionRequest &other);
    CreateSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSessionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
