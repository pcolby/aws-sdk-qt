// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRUNREQUEST_H
#define QTAWS_STARTJOBRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartJobRunRequestPrivate;

class QTAWSGLUE_EXPORT StartJobRunRequest : public GlueRequest {

public:
    StartJobRunRequest(const StartJobRunRequest &other);
    StartJobRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartJobRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
