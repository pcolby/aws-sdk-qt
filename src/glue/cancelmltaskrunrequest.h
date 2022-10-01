// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMLTASKRUNREQUEST_H
#define QTAWS_CANCELMLTASKRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CancelMLTaskRunRequestPrivate;

class QTAWSGLUE_EXPORT CancelMLTaskRunRequest : public GlueRequest {

public:
    CancelMLTaskRunRequest(const CancelMLTaskRunRequest &other);
    CancelMLTaskRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelMLTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
