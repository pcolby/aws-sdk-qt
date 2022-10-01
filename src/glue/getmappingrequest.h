// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPPINGREQUEST_H
#define QTAWS_GETMAPPINGREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetMappingRequestPrivate;

class QTAWSGLUE_EXPORT GetMappingRequest : public GlueRequest {

public:
    GetMappingRequest(const GetMappingRequest &other);
    GetMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMappingRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
