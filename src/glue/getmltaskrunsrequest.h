// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTASKRUNSREQUEST_H
#define QTAWS_GETMLTASKRUNSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetMLTaskRunsRequestPrivate;

class QTAWSGLUE_EXPORT GetMLTaskRunsRequest : public GlueRequest {

public:
    GetMLTaskRunsRequest(const GetMLTaskRunsRequest &other);
    GetMLTaskRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLTaskRunsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
