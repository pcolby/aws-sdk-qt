// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLANREQUEST_H
#define QTAWS_GETPLANREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetPlanRequestPrivate;

class QTAWSGLUE_EXPORT GetPlanRequest : public GlueRequest {

public:
    GetPlanRequest(const GetPlanRequest &other);
    GetPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlanRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
