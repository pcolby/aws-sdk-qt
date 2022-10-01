// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIGGERSREQUEST_H
#define QTAWS_LISTTRIGGERSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ListTriggersRequestPrivate;

class QTAWSGLUE_EXPORT ListTriggersRequest : public GlueRequest {

public:
    ListTriggersRequest(const ListTriggersRequest &other);
    ListTriggersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTriggersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
