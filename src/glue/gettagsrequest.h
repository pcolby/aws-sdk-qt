// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGSREQUEST_H
#define QTAWS_GETTAGSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetTagsRequestPrivate;

class QTAWSGLUE_EXPORT GetTagsRequest : public GlueRequest {

public:
    GetTagsRequest(const GetTagsRequest &other);
    GetTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTagsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
