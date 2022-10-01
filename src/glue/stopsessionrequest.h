// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSESSIONREQUEST_H
#define QTAWS_STOPSESSIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StopSessionRequestPrivate;

class QTAWSGLUE_EXPORT StopSessionRequest : public GlueRequest {

public:
    StopSessionRequest(const StopSessionRequest &other);
    StopSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSessionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
