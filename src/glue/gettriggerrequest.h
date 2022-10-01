// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRIGGERREQUEST_H
#define QTAWS_GETTRIGGERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetTriggerRequestPrivate;

class QTAWSGLUE_EXPORT GetTriggerRequest : public GlueRequest {

public:
    GetTriggerRequest(const GetTriggerRequest &other);
    GetTriggerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
