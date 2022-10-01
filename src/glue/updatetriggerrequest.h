// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIGGERREQUEST_H
#define QTAWS_UPDATETRIGGERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateTriggerRequestPrivate;

class QTAWSGLUE_EXPORT UpdateTriggerRequest : public GlueRequest {

public:
    UpdateTriggerRequest(const UpdateTriggerRequest &other);
    UpdateTriggerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
