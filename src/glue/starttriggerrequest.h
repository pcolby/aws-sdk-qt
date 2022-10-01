// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRIGGERREQUEST_H
#define QTAWS_STARTTRIGGERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartTriggerRequestPrivate;

class QTAWSGLUE_EXPORT StartTriggerRequest : public GlueRequest {

public:
    StartTriggerRequest(const StartTriggerRequest &other);
    StartTriggerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
