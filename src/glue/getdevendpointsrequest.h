// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVENDPOINTSREQUEST_H
#define QTAWS_GETDEVENDPOINTSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetDevEndpointsRequestPrivate;

class QTAWSGLUE_EXPORT GetDevEndpointsRequest : public GlueRequest {

public:
    GetDevEndpointsRequest(const GetDevEndpointsRequest &other);
    GetDevEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevEndpointsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
