// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRIGGERSREQUEST_H
#define QTAWS_GETTRIGGERSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetTriggersRequestPrivate;

class QTAWSGLUE_EXPORT GetTriggersRequest : public GlueRequest {

public:
    GetTriggersRequest(const GetTriggersRequest &other);
    GetTriggersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTriggersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
