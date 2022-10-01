// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESESSIONREQUEST_H
#define QTAWS_DELETESESSIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteSessionRequestPrivate;

class QTAWSGLUE_EXPORT DeleteSessionRequest : public GlueRequest {

public:
    DeleteSessionRequest(const DeleteSessionRequest &other);
    DeleteSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSessionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
