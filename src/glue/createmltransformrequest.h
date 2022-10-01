// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMLTRANSFORMREQUEST_H
#define QTAWS_CREATEMLTRANSFORMREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateMLTransformRequestPrivate;

class QTAWSGLUE_EXPORT CreateMLTransformRequest : public GlueRequest {

public:
    CreateMLTransformRequest(const CreateMLTransformRequest &other);
    CreateMLTransformRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMLTransformRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
