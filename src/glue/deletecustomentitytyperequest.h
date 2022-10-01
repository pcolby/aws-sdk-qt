// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMENTITYTYPEREQUEST_H
#define QTAWS_DELETECUSTOMENTITYTYPEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteCustomEntityTypeRequestPrivate;

class QTAWSGLUE_EXPORT DeleteCustomEntityTypeRequest : public GlueRequest {

public:
    DeleteCustomEntityTypeRequest(const DeleteCustomEntityTypeRequest &other);
    DeleteCustomEntityTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomEntityTypeRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
