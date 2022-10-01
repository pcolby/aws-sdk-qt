// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBLUEPRINTREQUEST_H
#define QTAWS_DELETEBLUEPRINTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteBlueprintRequestPrivate;

class QTAWSGLUE_EXPORT DeleteBlueprintRequest : public GlueRequest {

public:
    DeleteBlueprintRequest(const DeleteBlueprintRequest &other);
    DeleteBlueprintRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBlueprintRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
