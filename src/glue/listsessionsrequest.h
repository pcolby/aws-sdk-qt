// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSESSIONSREQUEST_H
#define QTAWS_LISTSESSIONSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ListSessionsRequestPrivate;

class QTAWSGLUE_EXPORT ListSessionsRequest : public GlueRequest {

public:
    ListSessionsRequest(const ListSessionsRequest &other);
    ListSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSessionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
