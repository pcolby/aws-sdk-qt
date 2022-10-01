// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBLUEPRINTREQUEST_H
#define QTAWS_UPDATEBLUEPRINTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateBlueprintRequestPrivate;

class QTAWSGLUE_EXPORT UpdateBlueprintRequest : public GlueRequest {

public:
    UpdateBlueprintRequest(const UpdateBlueprintRequest &other);
    UpdateBlueprintRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBlueprintRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
