// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRUNSREQUEST_H
#define QTAWS_GETJOBRUNSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetJobRunsRequestPrivate;

class QTAWSGLUE_EXPORT GetJobRunsRequest : public GlueRequest {

public:
    GetJobRunsRequest(const GetJobRunsRequest &other);
    GetJobRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobRunsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
