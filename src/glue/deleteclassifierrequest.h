// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLASSIFIERREQUEST_H
#define QTAWS_DELETECLASSIFIERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteClassifierRequestPrivate;

class QTAWSGLUE_EXPORT DeleteClassifierRequest : public GlueRequest {

public:
    DeleteClassifierRequest(const DeleteClassifierRequest &other);
    DeleteClassifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClassifierRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
