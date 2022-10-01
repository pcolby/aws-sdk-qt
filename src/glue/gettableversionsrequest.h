// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEVERSIONSREQUEST_H
#define QTAWS_GETTABLEVERSIONSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetTableVersionsRequestPrivate;

class QTAWSGLUE_EXPORT GetTableVersionsRequest : public GlueRequest {

public:
    GetTableVersionsRequest(const GetTableVersionsRequest &other);
    GetTableVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableVersionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
