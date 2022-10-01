// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLEVERSIONREQUEST_H
#define QTAWS_DELETETABLEVERSIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteTableVersionRequestPrivate;

class QTAWSGLUE_EXPORT DeleteTableVersionRequest : public GlueRequest {

public:
    DeleteTableVersionRequest(const DeleteTableVersionRequest &other);
    DeleteTableVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTableVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
