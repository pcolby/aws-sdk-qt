// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMLTRANSFORMREQUEST_H
#define QTAWS_DELETEMLTRANSFORMREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteMLTransformRequestPrivate;

class QTAWSGLUE_EXPORT DeleteMLTransformRequest : public GlueRequest {

public:
    DeleteMLTransformRequest(const DeleteMLTransformRequest &other);
    DeleteMLTransformRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMLTransformRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
