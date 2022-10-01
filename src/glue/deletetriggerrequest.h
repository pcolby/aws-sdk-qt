// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIGGERREQUEST_H
#define QTAWS_DELETETRIGGERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteTriggerRequestPrivate;

class QTAWSGLUE_EXPORT DeleteTriggerRequest : public GlueRequest {

public:
    DeleteTriggerRequest(const DeleteTriggerRequest &other);
    DeleteTriggerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
