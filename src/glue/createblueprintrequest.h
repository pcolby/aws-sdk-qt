// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBLUEPRINTREQUEST_H
#define QTAWS_CREATEBLUEPRINTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateBlueprintRequestPrivate;

class QTAWSGLUE_EXPORT CreateBlueprintRequest : public GlueRequest {

public:
    CreateBlueprintRequest(const CreateBlueprintRequest &other);
    CreateBlueprintRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBlueprintRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
