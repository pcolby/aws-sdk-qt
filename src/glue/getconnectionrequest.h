// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONREQUEST_H
#define QTAWS_GETCONNECTIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetConnectionRequestPrivate;

class QTAWSGLUE_EXPORT GetConnectionRequest : public GlueRequest {

public:
    GetConnectionRequest(const GetConnectionRequest &other);
    GetConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
