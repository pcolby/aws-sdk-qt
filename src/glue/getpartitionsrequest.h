// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONSREQUEST_H
#define QTAWS_GETPARTITIONSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetPartitionsRequestPrivate;

class QTAWSGLUE_EXPORT GetPartitionsRequest : public GlueRequest {

public:
    GetPartitionsRequest(const GetPartitionsRequest &other);
    GetPartitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPartitionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
