// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBREQUEST_H
#define QTAWS_GETJOBREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetJobRequestPrivate;

class QTAWSGLUE_EXPORT GetJobRequest : public GlueRequest {

public:
    GetJobRequest(const GetJobRequest &other);
    GetJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
