// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRIGGERREQUEST_H
#define QTAWS_STOPTRIGGERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StopTriggerRequestPrivate;

class QTAWSGLUE_EXPORT StopTriggerRequest : public GlueRequest {

public:
    StopTriggerRequest(const StopTriggerRequest &other);
    StopTriggerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
