// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMLTRANSFORMREQUEST_H
#define QTAWS_UPDATEMLTRANSFORMREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateMLTransformRequestPrivate;

class QTAWSGLUE_EXPORT UpdateMLTransformRequest : public GlueRequest {

public:
    UpdateMLTransformRequest(const UpdateMLTransformRequest &other);
    UpdateMLTransformRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMLTransformRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
