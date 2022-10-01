// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTASKRUNREQUEST_H
#define QTAWS_GETMLTASKRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetMLTaskRunRequestPrivate;

class QTAWSGLUE_EXPORT GetMLTaskRunRequest : public GlueRequest {

public:
    GetMLTaskRunRequest(const GetMLTaskRunRequest &other);
    GetMLTaskRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
